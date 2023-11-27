#include <iostream>
#include <cmath>

double calculateSin(double x) {
    double result = 0;

    result = x - (pow(x, 3) / 6) + (pow(x, 5) / 120) - (pow(x, 7) / 5040);

    return result;
}

int main() {
    double x;
    std::cout << "Enter a value for x: ";
    std::cin >> x;

    double result = calculateSin(x);

    std::cout << "sin(" << x << ") = " << result << std::endl;

    return 0;
}
