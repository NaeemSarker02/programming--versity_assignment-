#include<iostream>
using namespace std;
int main(){
    int a = 9, b = 12, c = 3, X,Y,Z; 

    X = a-b/3+c*2-1;
    Y = a-(b/(3+c)*2)-1;
    Z = a-((b/3)+c*2)-1;

    cout<<" X = "<<X<<endl;
    cout<<" Y = "<<Y<<endl;
    cout<<" Z = "<<Z;


}