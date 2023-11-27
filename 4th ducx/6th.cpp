#include <iostream>
using namespace std;
int main() {
    int X, N;
    
    cout << "Player-1, please pick a number (X): ";
    cin >> X;
    
    cout << "Player-2, you have N tries. Enter the value of N: ";
    cin >> N;

    int i = 0; 

    while (i < N) {
        int guess;
        cout << "Player-2, make a guess: ";
        cin >> guess;
        i++;

        if (guess == X) {
            cout << "Right, Player-2 wins!" <<endl;
            break; 
        } else {
            int remainingTries = N - i;
            if (remainingTries > 0) {
                cout << "Wrong, " << remainingTries << " Choice(s) Left!" <<endl;
            } else {
                cout << "Player-1 wins!" <<endl;
            }
        }
    }

    return 0;
}
