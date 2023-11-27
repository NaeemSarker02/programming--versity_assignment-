#include<iostream>
using namespace std;
void printPattern(int n){
    for(int i=0;i<n;++i){
         int count= n-1;
      for(int j=0;j<=i;++j){
         cout<<count--;
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

