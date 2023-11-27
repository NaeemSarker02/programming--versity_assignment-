#include <iostream>
using namespace std;
bool isPalindrome(int n) {
  int reversedNumber = 0;
  int originalNumber = n;

  while (n > 0) {
    int remainder = n % 10;
    reversedNumber = reversedNumber * 10 + remainder;
    n /= 10;
  }

  return reversedNumber == originalNumber;
}

int main() {
  int n;
  cout << "Enter an integer: ";
  cin >> n;

  if (isPalindrome(n)) {
    cout <<"YES" << endl;
  } else {
    cout <<"NO" << endl;
  }

  return 0;
}