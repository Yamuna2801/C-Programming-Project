#include<stdio.h>
void main() {
       int i, j;
       clrscr();
       for (j=1; j<=10; j++) {
	 printf("\n\n");
	 for(i=1; i<=j; i++) {
	   printf("%d,%d\t", i, j);
	 }
       }
       getchar();
}