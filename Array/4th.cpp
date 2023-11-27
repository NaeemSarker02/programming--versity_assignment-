#include<iostream>
using namespace std;
int main(){
    int n;
    float sum = 0.0;

    cout<<"enter the size of array : ";
    cin>>n;
    float arr[n];

    cout<<"enter your floating numbers : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }

    float average = sum/n;
    cout<<"Average of the numbers: "<<average;
    return 0;
}
