#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the number of terms: ";
  cin >> n;

  int sum = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 1) {
      sum += i;
    } else {
      sum -= i;
    }
  }
  cout <<"result :"<< sum << endl;
  return 0;
}