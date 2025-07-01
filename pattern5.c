#include<stdio.h>
void main() {
       int i, j, n;
       char name[] = "YAMUNA";
       clrscr();
       printf("length: %d", sizeof(name));

       for(i=0; i<8; i++) {
	 printf("\n");
	 for(j=0; j<8; j++) {
	    if((i==j) && (i!=0 && i!=7) && (j!=0 && j!=7)) {
	    printf("%c\t", name[i-1]);
	   }else{
	     printf("*\t");
	   }
	}
      }
     getchar();
}