#include <iostream>
using namespace std;
int power(int x, int y) {
  if (y == 0) {
    return 1;
  } else {
    return x * power(x, y - 1);
  }
}
int main() {
  int x, y;
  cout << "Enter x and y: ";
  cin >> x >> y;

  cout << "x^y = " << power(x, y) << endl;

  return 0;
}