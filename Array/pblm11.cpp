#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of the array:";
  cin>>n;
  int A[n],B[n];
  cout<<"Enter"<<n<<"integers for array A:";
  for(int i=0;i<n;++i){
      cin>>A[i];
  }

 for(int i=0;i<n;++i){
    B[i]=A[n-1-i];
 }
 cout<<"Array B:";
 for(int i=0;i<n;++i){
      cout<<B[i]<<" ";
 }

}
