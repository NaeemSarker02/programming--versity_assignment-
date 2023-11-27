#include <iostream>
using namespace std;

int main() {

  int n, i = 0, r;

  cout << "Enter an integer: ";
  cin >> n;

  while(n != 0) {
    r = n % 10;
    i = i * 10 + r;
    n /= 10;
  }

  cout << "Reversed Number = " <<i;

  return 0;
}