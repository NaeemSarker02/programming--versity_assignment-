#include <iostream>
using namespace std;


int main() {
    int N;
   cout << "Enter the value : ";
   cin >> N;

    int a = 1, b = 1;
    if (N >= 1) {
    cout << a;
    }
    if (N >= 2) {
    cout << ", " << b;
    }

    for (int i = 3; i <= N; ++i) {
        int c = a + b;
        cout << ", " << c;
        a = b;
        b = c;
    }

    cout << endl;

    return 0;
}
