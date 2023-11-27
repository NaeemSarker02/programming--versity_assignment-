#include<iostream>
using namespace std;
int main()
{
  int n,pos;
  cout<<"Enter the size of the array:";
  cin>>n;
  int A[n];
  cout<<"Enter"<<n<<"integers for array A:";
  for(int i=0;i<n;++i){
      cin>>A[i];
  }
cout<<"Enter the position to delete:";
cin>>pos;
if(pos<1||pos>n){
      cout<<"Invalid position:";
      return 1;
}
for(int i=pos-1;i<n-1;++i){
     A[i]=A[i+1];
}
for(int i=n;i>=pos;--i){
       A[i]=A[i-1];

}
cout<<"Array A after deletion:";
for(int i=0;i<n-1;++i){
         cout<<A[i]<<" ";
}
}


