#include<iostream>
using namespace std;
int main(){
    int n1, n2,result;
    char operatorr;

    cout<<"Enter <number1> <operator> <number2> : ";
    cin>>n1>>operatorr>>n2;

    if(operatorr != '+' && operatorr != '-' && operatorr != '*' && operatorr != '/'){
        cout<<"invalid operator!!!"<<endl;
        return 1;
    }
    if(operatorr == '/' && n2 == 0){
        cout<<" Zero as divisor is not valid!";
        return 1;
    }

    switch (operatorr)
    {
      case '+':
      result = n1 + n2;
        cout<<"addition : "<<result;
        break;
      case '-':
        result = n1 - n2;
        cout<<"subtraction : "<<result;
        break;
      case '*' :
        result = n1 * n2;
        cout<<"multiplication : "<<result;
        break;
      case '/' :
        result = n1 / n2;
        cout<<"Division : "<<result;
        break;

    }
    
}