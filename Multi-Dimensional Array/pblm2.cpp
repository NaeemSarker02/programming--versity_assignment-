#include<iostream>
#include<vector>
using namespace std;
int main()
{
 int m,n;
 cout<<"Enter the number of rows m:";
 cin>>m;
 cout<<"Enter the number of columns n:";
 cin>>n;
 vector<vector<int>>matrix(m,vector<int>(n));
  cout<<"Enter"<<m*n<<"integers for the"<<m<<"*"<<n<<"matrix:";
  for(int i=0;i<m;++i){
      for(int j=0;j<n;++j){
          cin>>matrix[i][j];
      }
  }
  cout<<"Row-wise:";
  for(int i=0;i<m;++i){
      for(int j=0;j<n;++j){
            cout<<" "<<matrix[i][j];
      }
  }

  cout<<"column-wise:";
  for(int j=0;j<n;++j){
      for(int i=0;i<m;++i){
            cout<<" "<<matrix[i][j];
      }
  }
}

