#include <stdio.h>
#include <string.h>
void main() {
      char word[20];
      int i, length, count = 0;
      clrscr();

      printf("Enter the word: ");
      scanf("%s", &word);
      gets(word);

      length = strlen(word);
      for(i=0; i<length; i++) {
	if (word[i] == word[length])
	count++;
      }
      if(length == count) {
	printf("This is a Palindrome");
       }else{
	 printf("This is not a Palindrome");
       }
       getchar();
}
