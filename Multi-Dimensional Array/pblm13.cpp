#include<iostream>
#include<vector>
int main()
{
  int n;
 std::cout<<"Enter the dimension n for the square matrix:";
 std::cin>>n;
 std::vector<std::vector<int>>matrix(n,std::vector<int>(n));
 std::cout<<"Enter"<<n*n<<"integers for the square matrix:";

  for(int i=0;i<n;++i)
   for(int j=0;j<n;++j)
    std::cin>>matrix[i][j];
    bool symmetric=false;

    for(int i=0;i<n;++i){
   for(int j=0;j<n;++j){
      if(matrix[i][j]!=matrix[j][i]){
             symmetric=true;
             break;
      }
   }
   if(!symmetric)break;
    }
   if(!symmetric)
  std::cout<<"Yes";
  else
  std::cout<<"No";
}




