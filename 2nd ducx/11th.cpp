#include<iostream>
using namespace std;
int main(){
    int a = 10, b= -10, c = 0, A, B, C;
    A = (a+b) <= 80  &&  b>=0;
    B = !(a-b) == 0 || c != 0;
    C =  a!=b ||(b<a) && c>0;
     cout<<"a) "<<A<<endl;
     cout<<"b) "<<B<<endl;
     cout<<"c) "<<C;

}