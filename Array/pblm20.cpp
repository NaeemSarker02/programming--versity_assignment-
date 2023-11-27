#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
   int n,m;
   cout<<"Enter the number of integers for array A:";
   cin>>n;
   int A[n];
   cout<<"Enter"<<n<<"integers for array A";
   for(int i=0;i<n;++i){
        cin>>A[i];
   }
cout<<"Enter the number of integers for array B:";
   cin>>m;
int B[m];
cout<<"Enter"<<m<<"integers for array B";
   for(int i=0;i<m;++i){
        cin>>B[i];
   }
 unordered_set<int>unionSet(A,A+n);
 unionSet.insert(B,B+m);
   cout<<"Union of arrays A and B:";
         for(int element:unionSet){
               cout<<element<<" ";
         }
   }

