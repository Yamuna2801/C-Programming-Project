#include <stdio.h>
#include <string.h>
void main() {
      char word[20];

      int i, length = 0;
      clrscr();

      printf("Enter the word: ");
      scanf("%s", word[i]);
      gets(word);

      length = strlen(word);
      for(i=0; i<length; i++) {
	if(word[i] == '\0');
	break;
      }
      printf("Entered the word: %s", word);
      getchar();
}