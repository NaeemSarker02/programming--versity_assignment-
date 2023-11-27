#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;

    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];

    cout<<"enter your integer numbers : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
        sum = sum+arr[i];
        }
    }
    cout<<"Sum of the even integers: "<<sum;
    return 0;
}
