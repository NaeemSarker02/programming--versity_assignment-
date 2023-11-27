#include<stdio.h>
int stringLength(char*str){
      int length=0;
      while(*str!='\0'){
           length++;
            str++;
      }
      return length;
}
int main()
{
 char input[]="My name is andy";
 int length=stringLength(input);
 printf("Length of the string:%d\n",length);
}

