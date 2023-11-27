#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number of integers:";
  cin>>n;
  int A[n];
  cout<<"Enter"<<n<<"integers:";
  for(int i=0;i<n;++i){
      cin>>A[i];
  }
  unordered_set<int>uniqueSet;
   for(int i=0;i<n;++i){
      uniqueSet.insert(A[i]);
   }
   cout<<"Array without duplicates:";
   for(int uniqueElement:uniqueSet){
          cout<<uniqueElement<<" ";
   }
}
