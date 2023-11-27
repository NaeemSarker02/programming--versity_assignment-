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
     for (int i = 0, j = n - 1; i < j; i++, j--){
       int temp = arr[i];
        arr[i] = arr[j];
        arr[j] =temp;

    }
    cout<<"reversed integers from index 0 to last valid index: ";
    for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";     
    }    
    return 0;
}
