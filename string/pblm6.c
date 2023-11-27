#include<stdio.h>
#include<ctype.h>
void convertToUpperCase(char*str){
     while(*str){
         *str=toupper(*str);
           str++;
     }
}
int main()
{
  char str[]="My name is andy";
  printf("Input:\"%s\"\n",str);
  convertToUpperCase(str);
  printf("output:\"%s\"\n",str);
}
