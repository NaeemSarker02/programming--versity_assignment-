#include<iostream>
#include<vector>
#include<unordered_map>
int main()
{
  int m,n;
 std::cout<<"Enter the number of rows and columns for the matrix:";
 std::cin>>m>>n;
 std::vector<std::vector<int>>matrix(m,std::vector<int>(n));
 std::cout<<"Enter"<<m*n<<" positive integers for the matrix:";

  for(int i=0;i<m;++i)
   for(int j=0;j<n;++j)
    std::cin>>matrix[i][j];

    std::unordered_map<int,int>frequency;


    for(int i=0;i<m;++i){
   for(int j=0;j<n;++j){
      if(frequency.find(matrix[i][j])!=frequency.end()){
                  matrix[i][j]=-1;
      }else{
          frequency[matrix[i][j]]++;
      }
   }
    }

  std::cout<<"Modified  matrix:";
  for(int i=0;i<m;++i)
   for(int j=0;j<n;++j)
   std::cout<<matrix[i][j]<<" ";
}





