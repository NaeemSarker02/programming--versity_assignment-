#include<iostream>
using namespace std;
int main(){
    int n;
    

    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];

    cout<<"enter your integer numbers : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"integers into reverse order : ";
    for(int j = n-1; j>=0; j--){
        cout<<arr[j]<<" ";
    }
    return 0;
}
