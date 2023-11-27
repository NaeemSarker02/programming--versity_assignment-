#include <iostream>
using namespace std;
int x = 10;
int main()
{
    cout << "A. Global : " << x << endl;
    int y = 20;
    cout << "B. Local : " << y << endl;
    cout << "C. Global : " << ::x;
}