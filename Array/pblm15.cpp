#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of array A:";
  cin>>n;
  int A[n];
  cout<<"Enter"<<n<<"positive integers for array A:";
  for(int i=0;i<n;++i){
      cin>>A[i];
 if(A[i]<=0){
      cout<<"please enter positive integers only:";
      return 1;
}
}
 for(int i=0;i<n;++i){
   if(A[i]%3==0){
     A[i]=-1;
   }
}
cout<<"Array A after replacing multiples of 3 with -1:";
for(int i=0;i<n;++i){
       cout<<A[i]<<" ";
}


}
