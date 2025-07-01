#include<stdio.h>

void main() {
     char subjects[20];
     int marks[] = {40, 50, 60, 70, 80};
     int i, n;
     clrscr();

     printf("Enter your subjects: %c", subjects);
     scanf("%s", &subjects);

     for(i=0; i<n; i++) {
      if(n < i) {
	printf("Your Subject marks: %d", marks);
      }
     }
     getchar();
}


