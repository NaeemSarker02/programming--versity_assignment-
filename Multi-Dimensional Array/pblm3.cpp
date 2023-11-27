#include<iostream>
int calculateDeterminant(int matrix[3][3]){
    return matrix[0][0]*(matrix[1][1]*matrix[2][2])-matrix[1][2]*matrix[2][1])-
    matrix[0][1]*(matrix[1][0]*matrix[2][2])-matrix[1][2]*matrix[2][0])+
     matrix[0][2]*(matrix[1][0]*matrix[2][1])-matrix[1][1]*matrix[2][0]);
}
int main()
{
 const int rows=3;
  const int columns=3;
  int matrix[rows][columns];
  cout<<"Enter elements for the 3*3 matrix:";
  for(int i=0;i<rows;++i){
   for(int j=0;j<columns;++j){
     cin>>matrix[i][j];
   }
  }
  int determinant=calculateDeterminant(matrix);
  cout<<"Determinant of the matrix:"<<determinant<<"\n";

}
