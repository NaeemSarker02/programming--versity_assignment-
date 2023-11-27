#include <iostream>

using namespace std;

int main() {
  char character;

  cout << "Enter a single character: ";
  cin >> character;

  if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
    cout << character << " is an alphabet." << endl;
  }

  else if (character >= '0' && character <= '9') {
    cout << character << " is a digit." << endl;
  }

  else {
    cout << character << " is a special character." << endl;
  }
return 0;
}