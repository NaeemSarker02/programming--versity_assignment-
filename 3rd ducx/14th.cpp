#include <iostream>

using namespace std;

int main() {
  int a, b;

  cout << "Menu:" << endl;
  cout << "1. Addition" << endl;
  cout << "2. Subtraction" << endl;
  cout << "3. Multiplication" << endl;
  cout << "4. Division" << endl;
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
      cout << "Sub-menu for division:" << endl;
      cout << "1. Quotient" << endl;
      cout << "2. Remainder" << endl;
      cout << "Enter your choice: ";

      int peek;
      cin >> peek;
      


      switch (peek) {
        case 1:
          cout << "Enter two numbers: ";
        
          cin >> a >> b;
          if(a==0 || b==0){
        cout<<"Error: Divisor is zero"<<endl;
      }else{
          cout << "The quotient is: " << a / b  << endl;}
          break;
        case 2:
          cout << "Enter two numbers: ";
          cin >> a >> b;
          if(a==0 || b==0){
        cout<<"Error: Divisor is zero"<<endl;
      }else{
          cout << "The remainder is: " << a % b << endl;}
          break;
        default:
          cout << "Invalid choice." << endl;
      }
      
      break;
      
    default:
      cout << "Invalid choice." << endl;
  }

  return 0;
}