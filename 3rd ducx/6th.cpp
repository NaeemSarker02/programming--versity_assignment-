#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        if ((num & (num - 1)) == 0) {
            cout << "Yes" <<endl;
        } else {
            cout << "No" <<endl;
        }
    } else if (num == 0) {
        cout << "Zero is not a valid input." <<endl;
    } else {
        cout << "Negative input is not valid." <<endl;
    }

    return 0;
}
