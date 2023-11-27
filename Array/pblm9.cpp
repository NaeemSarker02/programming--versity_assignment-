#include <iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter the number of alphabets:";
 cin>>n;
 char arr[n];
 cout<<"Enter"<<n<<"alphabets:"<<endl;
 for(int i=0;i<n;++i){
  cin>>arr[i];
 }
 int vowelCount=0;
  for(int i=0;i<n;++i){
     char ch=tolower(arr[i]);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
         ++vowelCount;
  }
}
cout<<"count:"<<vowelCount<<endl;
}
