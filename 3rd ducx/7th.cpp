#include<iostream>
using namespace std;

 int main(){
    int x,y;
    cout<<"Enter the value of X:";
    cin>>x;
    cout<<"Enter the value of Y:";
    cin>>y;
    if(x>y){
        cout<<x<<" "<<"is greater than"<<" "<< y;
    } else if(x<y){
        cout<<x<<" "<<"is less than"<<" "<< y;
    }else{
        cout<<x<<" "<<"is equal to"<<" "<< y;
    }
 }