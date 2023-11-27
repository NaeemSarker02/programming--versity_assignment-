#include<iostream>
using namespace std;
int main(){
    int x ;
    cout<<"Enter your value :";
    cin>>x;
    x = x++;
    printf("X++ : %d\n",x); 
    x = ++x;
    printf("++X : %d\n",x); 
    x = 5;
    printf("X-- : %d\n",x); 
    x = --x;
    printf("--X : %d",x); 
      
}