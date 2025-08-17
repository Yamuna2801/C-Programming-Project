#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
    char str[50];
    int i, j, count, maxCount = 0;
    char maxChar;
    clrscr();

    printf("Enter a string: ");
    gets(str);

    for(i=0; str[i] != '\0'; i++) {
      count = 1;

      if(str[i] == '\0')
      continue;

      for(j=i+1; str[j] != '\0'; j++) {
	if(str[i] == str[j]) {
	  count++;
	  str[j] = '0';
	}
      }

      if(count > maxCount) {
	maxCount = count;
	maxChar = str[i];
      }
    }

    printf("\n Maximum occurring character is '%c' appearing %d times.", maxChar, maxCount);

    getch();
    return 0;
}