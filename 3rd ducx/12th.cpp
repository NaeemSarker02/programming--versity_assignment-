#include <iostream>

using namespace std;

int main() {
  float a, b;

  cout << "Menu:" << endl;
  cout << "1. Addition" << endl;
  cout << "2. Subtraction" << endl;
  cout << "3. Multiplication" << endl;
  cout << "4. Division (quotient)" << endl;
  cout << "Enter your choice: ";

  int choice;
  cin >> choice;

  switch (choice) {
    case 1:
      cout << "Enter two numbers: ";
      cin >> a >> b;
      cout << "The sum is: " << a + b << endl;
      break;
    case 2:
      cout << "Enter two numbers: ";
      cin >> a >> b;
      cout << "The difference is: " << a - b << endl;
      break;
    case 3:
      cout << "Enter two numbers: ";
      cin >> a >> b;
      cout << "The product is: " << a * b << endl;
      break;
    case 4:
      cout << "Enter two numbers: ";
      cin >> a >> b;
      cout << "The quotient is: " << a / b << endl;
      break;
    default:
      cout << "Invalid choice." << endl;
  }

  return 0;
}