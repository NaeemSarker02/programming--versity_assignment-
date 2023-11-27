#include <iostream>
using namespace std;
int main() {
    int x, y, max;
    cout<<"Enter the values of X & Y : ";
    cin>>x>>y;
    max = x>y ? x:y;
    cout<<"Max value : "<<max;

    return 0;
}
