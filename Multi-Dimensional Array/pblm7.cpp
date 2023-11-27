#include<iostream>
int main()
{
  int m,n,p;
 std::cout<<"Enter the number of rows and columns for matrix A:";
 std::cin>>m>>n;

  int A[m][n];
 std::cout<<"Enter the elements of matrix A:";
  for(int i=0;i<m;++i)
   for(int j=0;j<n;++j)
    std::cin>>A[i][j];

  std::cout<<"Enter the number of columns for matrix B:";
 std::cin>>p;

   int B[n][p];
 std::cout<<"Enter the elements of matrix B:";
  for(int i=0;i<n;++i)
   for(int j=0;j<p;++j)
    std::cin>>B[i][j];

   int c[m][p];
 std::cout<<"Enter the elements of matrix B:";
  for(int i=0;i<m;++i){
   for(int j=0;j<p;++j){
     c[i][j]=0;
     for(int k=0;k<n;++k){
       c[i][j]+=A[i][k]*B[k][j];
     }
}
  }

   std::cout<<"Resulant matrix c(c=A*B):";
      for(int i=0;i<m;++i){
   for(int j=0;j<p;++j)
   std::cout<<c[i][j]<<" ";
}
}

