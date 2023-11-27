#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "enter the size of array : ";
    cin >> n;
    int arr1[n];

    cout << "enter your integer numbers for arr1 : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int arr2[n];
    cout << "enter your integer numbers for arr2 : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int arr3[n];
    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
    cout<<"third array : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr3[i]<<" ";
    }
    return 0;
}
