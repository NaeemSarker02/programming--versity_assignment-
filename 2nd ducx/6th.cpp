#include <iostream>
using namespace std;
int main() {
    int X, Y;
    cout<<"Enter your value of X :";
    cin>>X;

    cout<<"Enter your value of Y :";
    cin>>Y;

    X *= Y;
    cout<<"Incremented Value: "<<X<<endl;

    X /= Y;
    cout<<"Incremented Value: "<<X;

    return 0;
}
