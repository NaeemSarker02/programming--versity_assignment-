#include<iostream>
using namespace std;
void printPattern(int n){

    for(int i=0;i<n;++i){
      for(int j=1;j<=n;++j){
         cout<<j;
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
