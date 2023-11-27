#include<stdio.h>
#include<string.h>
int countOccurrences(const char *str,const char *word){
                int count=0;
                int wordLen=strlen(word);

while(*str){
if(strncmp(str,word,wordLen)==0){
             count++;
              str=wordLen-1;
}
  str++;
}
  return count;
}
int main()
{
  char sentence[1000];
  char word[50];
  printf("Enter a sentence:");
  fgets(sentence,sizeof(sentence),stdin);
  printf("Enter the word to count:");
  scanf("%s",word);
  int occurrences=countOccurrences(sentence,word);
  printf("occurrences of '%s'in the sentence:%d\n",word,occurrences);
}
