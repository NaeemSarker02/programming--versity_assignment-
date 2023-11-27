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
   int first_row_sum=0;
   int last_row_sum=0;
   int main_diag_sum=0;
   int anti_diag_sum=0;
   for(int i=0;i<n;++i){
   first_row_sum+=matrix[0][i];
   last_row_sum+=matrix[n-1][i];
   main_diag_sum+=matrix[i][i];
   anti_diag_sum+=matrix[i][n-1-i];

   }

  int total_sum=first_row_sum+last_row_sum-matrix[0][n/2]-matrix[n-1][n/2]+
           main_diag_sum-matrix[n-1][n-1]+
           anti_diag_sum-matrix[0][0];
         std::cout<<"Total sum:"<<total_sum;
}



