#include <stdio.h>
#include <string.h>

int main() {
     char word[8];
     int i;
     clrscr();
     printf("Enter the word: ");
     gets(word);

     printf("Entered word:%s ", word[i]);
      for(i=0; i<8; i++) {
	if(i==5 || i==6 || i==7) {
	  printf("*");
	}else{
	  printf("%c", word[i]);
	}
      }
    getchar();

    return 0;
}
