#include<stdio.h>

void main() {
       int i, j;
       clrscr();
       for (j=5; j>=0; j-=1) {
	 printf("\n\n");
	 for (i=j; i>=1; i-=1) {
	   printf("\t*");
	 }
       }
       getchar();
}

