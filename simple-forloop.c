#include<stdio.h>
void main() {
	int i, j, count = 0, limit = 10;
	clrscr();
	for(j=0;j<limit;j++){
	  printf("\n");
	  for(i=0;i<j;i++){
	    //printf("(%d,%d)=%d\t", j, i, i);
	    printf("%d\t",j);
	    count++;
	  }
	  printf("sub-count: %d\n", count);
	}
	printf("Count: %d", count);
	getchar();
}

