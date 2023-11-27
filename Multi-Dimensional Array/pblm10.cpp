#include<iostream>
int main()
{
  int n;
 std::cout<<"Enter an odd number n for the square matrix:";
 std::cin>>n;
  if(n%2==0){

     std::cout<<"please enter an odd number for the dimension of the square matrix";
      return 1;
  }
  int matrix[n][n];
 std::cout<<"Enter"<<n*n<<"integers for the square matrix";
  for(int i=0;i<n;++i)
   for(int j=0;j<n;++j)
    std::cin>>matrix[i][j];
    int total_sum=0;

   for(int i=0;i<n;++i){
       if(i==0||i==n-1){
        for(int j=0;j<n;++j)
        total_sum+=matrix[i][j];

   }else{
      total_sum+=matrix[i][0];
       total_sum+=matrix[i][n-1];
   }
   }
         std::cout<<"Total sum:"<<total_sum;
}




