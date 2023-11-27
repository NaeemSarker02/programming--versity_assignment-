#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the size of the square matrix n:";
cin>>n;
int matrix[n][n];
cout<<"Enter elements for the"<<n<<"*"<<n<<"matrix:";
for(int i=0;i<n;++i){
   for(int j=0;j<n;++j){
       cin>>matrix[i][j];
   }
}
cout<<"Major diagonal:";
   for(int i=0;i<n;++i){
       cout<<" "<<matrix[i][i];
   }
  cout<<"Minor diagonal:";
   for(int i=0;i<n;++i){
       cout<<" "<<matrix[i][n-1-i];
   }
}

