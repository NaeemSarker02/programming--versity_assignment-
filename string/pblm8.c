#include<stdio.h>
#include<string.h>
void sortString(char*str){
   int length=strlen(str);
   char temp;
   for(int i=0;i<length-1;i++){
     for(int j=i;j<length-1;j++){
      if(str[i]>str[j]){
           temp=str[i];
           str[i]=str[j];
            str[j]=temp;
      }
     }
     }
}
int main()
{
  char str[]="My name is andy";
  printf("Input:\"%s\"\n",str);
  sortString(str);
  printf("output:\"%s\"\n",str);
}

