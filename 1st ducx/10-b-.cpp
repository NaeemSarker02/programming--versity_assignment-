#include<iostream>
using namespace std;
int main(){
    long int x = -2147483647;
    long long int y  = -9223372036854775807;
    long double z = 1.1E-4932;
    short int xs = -32767;

    cout<<"The long integer value : "<<x<<endl;
    cout<<"The long long integer value : "<<y<<endl;
    cout<<"The long double value : "<<z<<endl;
    cout<<"The short integer value is : "<<xs;
}