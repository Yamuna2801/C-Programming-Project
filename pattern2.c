#include<stdio.h>

void main() {
	int i, j;
	clrscr();
	for(i=0; i<5; i++) {
	  printf("\n");
	  for(j=0; j<i; j++) {
	    printf("\t*");
	  }
	}
	for(i=5; i>0; i--) {
	  printf("\n");
	  for(j=i; j>0; j--) {
	    printf("\t*");
	  }
	}
     getchar();
}