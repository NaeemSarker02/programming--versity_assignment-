#include<iostream>
int main()
{
  int m,n;
 std::cout<<"Enter the number of rows and columns for the matrix:";
 std::cin>>m>>n;

  int matrix[m][n];
 std::cout<<"Enter the elements of the matrix:";
  for(int i=0;i<m;++i)
   for(int j=0;j<n;++j)
    std::cin>>matrix[i][j];
    int max_value=INT_MIN;
    int max_row=0,max_col=0;

  for(int i=0;i<m;++i){
   for(int j=0;j<n;++j){
      if(matrix[i][j]>max_value){
              max_value=matrix[i][j];
              max_row=i;
              max_col=j;
      }
   }
}
std::cout<<"Max:"<<max_value<<"\n";
std::cout<<"Location:["<<max_row<<"]["<<max_col<<"]\n";
}
