#include <iostream>
using namespace std;
int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}
int lcm(int a, int b) {
  return a * b / gcd(a, b);
}
int main() {
  int a, b;
  cout << "Enter two positive integers: ";
  cin >> a >> b;

  int gcd_of_a_and_b= gcd(a, b);
  int lcm_of_a_and_b= lcm(a, b);

  cout << "GCD  "<<gcd_of_a_and_b<< endl;
  cout << "LCM  "<<lcm_of_a_and_b<< endl;

  return 0;
}