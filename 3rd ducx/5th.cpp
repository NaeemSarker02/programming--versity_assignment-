#include <iostream>
using namespace std;

   bool isPowerOf2(int number) {
    if (number <= 0) {
        return false;
    }
    return (number & (number - 1)) == 0;
}
int main() {
    int number;

    cout << "Enter a positive nonzero number: ";
    cin >> number;

    if (isPowerOf2(number)) {
        cout << "Yes" <<endl;
    } else {
        cout << "No" <<endl;
    }

    return 0;
}
