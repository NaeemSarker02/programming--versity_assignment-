#include <iostream>
using namespace std;
int main() {
    int N;
    double sum = 0.0;

    cout << "Enter the number of inputs (N): ";
    cin >> N;

   
        cout << "Enter " << N << " numbers: ";
        for (int i = 0; i < N; i++) {
            double num;
            cin >> num;
            sum += num;
        }

        if(N > 0) {
            double average = sum / N;
            cout << "Average of " << N << " inputs: " << average <<endl;
        }
    

    return 0;
}
