#include<iostream>
using namespace std;
int main()
{
 const int rows=3;
  const int columns=3;
  int matrix[rows][columns];
  cout<<"Enter 9 integers for the 3*3 matrix:";
  for(int i=0;i<rows;++i){
   for(int j=0;j<columns;++j){
     cin>>matrix[i][j];
   }
  }
  cout<<"Matrix view:";
  for(int i=0;i<rows;++i){
        for(int j=0;j<columns;++j){
            cout<<matrix[i][j]<<" ";
        }
  }

}
