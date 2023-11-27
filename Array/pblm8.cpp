#include <iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter the number of integers:";
 cin>>n;
 int arr[n];
 cout<<"Enter"<<n<<"integers:"<<endl;
 for(int i=0;i<n;++i){
  cin>>arr[i];
 }
 int maxVal=arr[0],minVal=arr[0];
 int maxIndex=0,minIndex=0;
 for(int i=0;i<n;++i){
     if(arr[i]>maxVal){
        maxVal=arr[i];
     maxIndex=i;
}
 if(arr[i]<minVal){
      minVal=arr[i];
      minIndex=i;
 }
 }
 cout<<"Maximum value:"<<maxVal<<"at index"<<maxIndex<<endl;
 cout<<"Minimum value:"<<minVal<<"at index"<<minIndex<<endl;
}
