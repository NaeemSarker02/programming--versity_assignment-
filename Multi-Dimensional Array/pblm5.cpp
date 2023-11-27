#include<iostream>
int main()
{
 int size;
std::cout<<"Enter the size of the identity matrix:";
std::cin>>size;
 int identityMatrix[size][size];
 for(int i=0;i<size;++i){
     for(int j=0;j<size;++j){
      if(i==j){
           identityMatrix[i][j]=1;
      }else{

        identityMatrix[i][j]=0;
      }
     }
 }
 std::cout<<"output";
   for(int i=0;i<size;++i){
     for(int j=0;j<size;++j){
     std::cout<<identityMatrix[i][j]<<" ";
     }
   }
}


