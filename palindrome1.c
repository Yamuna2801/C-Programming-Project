/*#include <stdio.h>
#include <string.h>
void main() {
      char word[20];
      int i, length, count = 0;
      clrscr();

      printf("Enter the word: ");
      scanf("%s", word);
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
}*/
#include <stdio.h>
void main() {
      char word[20];
      char reverse[20];
      int i, size, j = 0;
      clrscr();

      printf("Enter the word:");
      scanf("%s", word);
      gets(word);

      size = (sizeof(word)/sizeof(word[0]));
      for(i=0; i<size; i++) {
	if(word[i] == '\0')
	break;
      }
      while(i>=0) {
       if(reverse[j++] == word[i++]);
      }

      printf("Entered word: %s\n", word);
      printf("Reversed word: %s\n", reverse);

      if(word == reverse)
	printf("This is a Palindrome");
      }else{
	printf("This is not a Palindrome");
      }







      getchar();
}