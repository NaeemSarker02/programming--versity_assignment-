#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number:";
  cin>>n;
  for(int i=1;i<=n;i++){
     for(int j=1;j<=i;j++){
        cout<<j;
     }
     for(int k=1;k<=2*(n-i);k++)
     {
        cout<<"_";
     }
     for(int I=i;I>=1;I--){
         cout<<1;
     }
   cout<<endl;
  }
}
