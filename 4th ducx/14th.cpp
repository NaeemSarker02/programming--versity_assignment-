#include <iostream>
using namespace std;
int nCr(int n, int r) {
  if (n < r) {
    return 0;
  } else if (n == r || r == 0) {
    return 1;
  } else {
    return nCr(n - 1, r) + nCr(n - 1, r - 1);
  }
}

int main() {
  int n, r;
  cout << "Enter n and r: ";
  cin >> n >> r;

  cout << "nCr = " << nCr(n, r) << endl;

  return 0;
}