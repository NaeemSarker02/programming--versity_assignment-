#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    float x;
    cout<<"Enter your value : ";
    cin>>x;

    printf("(a) value: \t%10.6f\n", x);
    printf("(b) value: %10.6f\n", x);
    printf("(c) value: %.2f\n", x);
    printf("(d) value: %.f\n", x);
    printf("(e) value: %e", x);
}