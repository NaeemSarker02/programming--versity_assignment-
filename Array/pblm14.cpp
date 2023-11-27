#include<iostream>
using namespace std;
int main()
{
   int n,m;
   cout<<"Enter the size of array A:";
   cin>>n;
   cout<<"Enter the size of array b:";
   cin>>m;
   int A[n],b[m];
   cout<<"Enter"<<n<<"integers for array A";
   for(int i=0;i<n;++i){
        cin>>A[i];
   }
   cout<<"Enter"<<n<<"integers for array b";
   for(int i=0;i<m;++i){
        cin>>b[i];
   }

  for(int i=0;i<min(n,m);++i){
         int temp=A[i];
         A[i]=b[i];
         b[i]=temp;
  }
  cout<<"Array A:";
  for(int i=0;i<m;++i){
        cout<<b[i]<<" ";
}
}
