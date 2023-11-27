#include <iostream>
#include <math.h>

using namespace std;

int main() {
  double X;
  cout << "Enter a floating point number: ";
  cin >> X;

  int A = round(X);
  int B = floor(X);
  double C = abs(X);

  cout << "A = " << A << endl;
  cout << "B = " << B << endl;
  cout << "C = " << C << endl;

  return 0;
}