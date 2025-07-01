#include <stdio.h>
#include <string.h>

int main() {
      char word[8];
      int i;
      clrscr();

      printf("Enter your word: ");
      gets(word);

	printf("Entered word: %s ", word[i]);
	for(i=0; i<8; i++) {
	 if(i%2 == 0) {
	   printf("%c", word[i]);
	 }else{
	   printf("*");
	 }
       }

      getchar();
      return 0;
}