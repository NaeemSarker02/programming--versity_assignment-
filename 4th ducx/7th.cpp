#include<iostream>
using namespace std;
int main(){
    char C;
    int i = 1;
    while(true){
        cout<<"Enter a value "<<i++<<":";
        cin>>C;
        if(C == 'A'){
            cout<<"Exiting!!!";
            return 0;
        }
    }
}