#include<iostream>
#include<vector>
int main()
{
  int m,n;
 std::cout<<"Enter the number of rows and columns for the matrix:";
 std::cin>>m>>n;
 std::vector<std::vector<int>>matrix(m,std::vector<int>(n));
 std::cout<<"Enter"<<m*n<<"integers for the matrix:";

  for(int i=0;i<m;++i)
   for(int j=0;j<n;++j)
    std::cin>>matrix[i][j];
    int sum=0;

    for(int i=0;i<m;++i){
   for(int j=0;j<n;++j){
      sum+=matrix[i][j];
   }
    }

  std::cout<<"sum of all integers in the matrix:"<<sum;
}




