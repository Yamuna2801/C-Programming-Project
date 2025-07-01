#include<stdio.h>
void main() {
       int i, j;
       clrscr();

       for(i=0; i<5; i++) {
	 printf("\n\n");
	 for(j=0; j<5; j++) {
	   printf("| 0 |");
	 }
       }
       getchar();
}