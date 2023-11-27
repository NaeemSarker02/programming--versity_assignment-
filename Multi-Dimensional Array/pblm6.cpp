#include<iostream>
int main()
{
  int m,n;
 std::cout<<"Enter the number of rows and columns for matrix A:";
 std::cin>>m>>n;

  int A[m][n];
 std::cout<<"Enter the elements of matrix A:";
  for(int i=0;i<m;++i)
   for(int j=0;j<n;++j)
    std::cin>>A[i][j];

   int B[m][n];
 std::cout<<"Enter the elements of matrix B:";
  for(int i=0;i<m;++i)
   for(int j=0;j<n;++j)
    std::cin>>B[i][j];

   int c[m][n];
 std::cout<<"Enter the elements of matrix B:";
  for(int i=0;i<m;++i)
   for(int j=0;j<n;++j)
     c[i][j]=A[i][j]+B[i][j];

   std::cout<<"Resulant matrix c(c=A+B):";
      for(int i=0;i<m;++i)
   for(int j=0;j<n;++j)
   std::cout<<c[i][j]<<" ";
}



