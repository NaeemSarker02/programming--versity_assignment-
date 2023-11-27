#include<stdio.h>
#include<ctype.h>
int main()
{
  char str[100];
  int sum=0;
  printf("Enter a string:");
  fgets(str,sizeof(str),stdin);
  for(int i=0;str[i]!='\0';i++){
           if(isdigit(str[i])){
                 sum+=str[i]-'0';
           }
  }
  printf("sum of digits in the string:%d\n",sum);
}
