#include <stdio.h>
#include<conio.h>
#include <string.h>
int main() {
      char word[20];
      int i, len;
      clrscr();

      printf("Enter the word: ");
      scanf("%s", word);

      len = strlen(word);

      for(i=0; i<len; i++) {
	if(word[i] != word[len - i - 1]) {
	  printf("Not a palindrome \n");
	  break;
	}else{
	  printf("This is palindrome \n");
	  break;
	}
      }

      getch();
      return 0;
}