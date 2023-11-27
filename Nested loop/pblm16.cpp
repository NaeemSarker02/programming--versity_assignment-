#include<iostream>
using namespace std;
int main()
{
  int n,i,j;
  cout<<"Enter the number:";
  cin>>n;
  if(n%2==0){
      cout<<"not odd number";
  }
  else{
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             if(i==j){
                cout<<"*";
             }
          else if(i+j==n-1){
                cout<<"*";
             }

           else{
                cout<<"_";
             }
           }
            cout<<endl;
    }
  }
}



