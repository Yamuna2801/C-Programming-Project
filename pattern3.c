#include<stdio.h>
void main() {
       int i, j;
       clrscr();

       for(i=1; i<=5; i++) {
	 printf("\n\n");
	 for(j=1; j<=5; j++) {
	   if((i==1 || j==1) || (i==5 || j==5)) {
	     //printf("%d,%d\t*", i, j);
	     printf("\t*");
	   }else{
	     //printf("%d,%d\t ", i, j);
	     printf("\t ");
	   }
	 }
       }
   getchar();
}