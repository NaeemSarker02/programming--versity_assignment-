#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x = 30;
    float PI = 3.1416;
    
    
    double x_rad = x *  PI  / 180;
    
    double result = 2 * cos(x_rad) * cos(x_rad)- sqrt(3) * sin(x_rad)+ sin(x / 2);
    
    cout << "Result: " << result <<endl;
    
    return 0;
}