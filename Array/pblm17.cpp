#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n,sort;
  cout<<"Enter the number of integers:";
  cin>>n;
  int A[n];
  cout<<"Enter"<<n<<"integers:";
  for(int i=0;i<n;++i){
      cin>>A[i];
  }
  std::sort(A,A+n);
  cout<<"sorted array:";
  for(int i=0;i<n;++i){
         cout<<A[i]<<" ";
  }
}
