#include <iostream>
using namespace std;
int main() {
    int X, Y;

    cout << "Enter two numbers (X and Y): ";
    cin >> X >> Y;

    if (X == Y) {
        cout << "Reached" <<endl;
    } else {
        while (X != Y) {
            int square = X * X;
            cout << square << ", ";

            if (X < Y) {
                X++;
            } else {
                X--;
            }
        }

        cout << "Reached!" << endl;
    }

    return 0;
}
