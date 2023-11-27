#include<iostream>
using namespace std;
int main(){
    int n, i, term = 0, sum = 0;
    cout<<"enter the numbers of trems : ";
    cin>>n;
    for(i=1; i<=n; i++){
        term = term * 10 + i;
        sum += term;
    }
    cout<<sum;
}