#include<iostream>
using namespace std;
int main()
{
  int n,pos,newNum;
  cout<<"Enter the size of the array:";
  cin>>n;
  int A[n];
  cout<<"Enter"<<n<<"integers for array A:";
  for(int i=0;i<n;++i){
      cin>>A[i];
  }
cout<<"Enter the position to insert:";
cin>>pos;
if(pos<1||pos>n+1){
      cout<<"Invalid position:";
      return 1;
}
cout<<"Enter the number to insert:";
cin>>newNum;
for(int i=n;i>=pos;--i){
       A[i]=A[i-1];

}
A[pos-1]=newNum;
cout<<"Array A after insertion:";
for(int i=0;i<=n;++i){
         cout<<A[i]<<" ";
}
}

