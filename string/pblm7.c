#include<stdio.h>
#include<ctype.h>
void toggleCase(char*str){
     while(*str){
      if(islower(*str)){
             *str=toupper(*str);
      }else if(isupper(*str)){
         *str=tolower(*str);
         }
           str++;
     }
}
int main()
{
  char str[]="My name is andy";
  printf("Input:\"%s\"\n",str);
  toggleCase(str);
  printf("output:\"%s\"\n",str);
}

