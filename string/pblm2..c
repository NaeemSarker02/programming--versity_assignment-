#include<stdio.h>
void concatenateStrings(char*str1,char*str2){
      while(*str1!='\0'){
            str1++;
      }
     while(*str2!='\0'){
            *str1=*str2;
            str1++;
            str2++;
}
  *str1!='\0';
}
int main()
{
 char str1[]="My name";
 char str2[]="is andy";
  concatenateStrings(str1,str2);
 printf("Concatenate string:%s\n",str1);
}


