#include<stdio.h>
void main() {
	int size = 11;
	int i,j;

	clrscr();
	for (i=size; i>0; i--) {
	  printf("\n");
	  for (j=6; j>0; j--) {
	    if (j >= i) {
	     printf("\t*");
	    }else{
	     printf(" ");
	    }
	  }
	}
	for (i=1; i<=j; i++) {
	  printf("\n");
	  for (j=1; j<=6; j++) {
	    if (i <= j) {
	     printf("*");
	    }else{
	     printf(" ");
	    }
	  }
	}
	getchar();
}