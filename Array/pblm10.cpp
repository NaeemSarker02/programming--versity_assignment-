#include <iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter the number of integers:";
 cin>>n;
 int arr[n];
 cout<<"Enter"<<n<<"integers into the array:"<<endl;
for(int i=0;i<n;++i){
  cin>>arr[i];
 }
 int searchNumber;
 cout<<"Enter the number to search:";
 cin>>searchNumber;
 bool found=false;
 int index;
 for(int i=0;i<n;++i){
       if(arr[i]==searchNumber){
                found=true;
                index=i;
                break;
       }
}
if(found){
      cout<<"Number found at index:"<<index<<endl;
}else{
    cout<<"NOT FOUND"<<endl;
}
}

