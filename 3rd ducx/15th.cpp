#include <iostream>

using namespace std;

int main() {
  int X;
  cout << "Player-1, enter a number: ";
  cin >> X;

  int N = 3;

  bool flag = false;

  for (int i = 0; i < N; i++) {
    int guess;
    cout << "Player-2, guess the number: ";
    cin >> guess;

    if (guess == X) {
      flag = true;
      break;
    }

    else {
      cout << "Wrong, " << N - i - 1 << " Chance(s) Left!" << endl;
      N--;
    }
  }

  if (flag) {
    cout << "Right, Player-2 wins!" << endl;
  }

  else {
    cout << "Player-1 wins!" << endl;
  }

  return 0;
}  
