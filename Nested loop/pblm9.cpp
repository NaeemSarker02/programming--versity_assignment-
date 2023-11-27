#include<iostream>
using namespace std;
void printPattern(int n){
    for(int i=0;i<n*2;++i){
      for(int j=0;j<n;++j){
       if((i+j)%2==0){
        cout<<"1";
       }else{
         cout<<"0";
      }
      }
      cout<<endl;
    }
}
int main()
{
 int num;
 cout<<"Enter a number:";
 cin>>num;
 printPattern(num);
}


