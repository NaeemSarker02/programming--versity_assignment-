#include<iostream>
using namespace std;
int main(){
    unsigned int x = 4294967295;
    unsigned long int y  = 72036854775807;
    unsigned long long int z = 18446744073709551615;
    unsigned short int xs = 65535;

    cout<<"The unsigned integer value : "<<x<<endl;
    cout<<"The unsigned long integer value : "<<y<<endl;
    cout<<"The unsigned long long integer value : "<<z<<endl;
    cout<<"The unsigned short integer value is : "<<xs;
}