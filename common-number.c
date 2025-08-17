#include<stdio.h>
#include<conio.h>

int main() {
    int a[50], b[50];
    int i, j, n1, n2;
    clrscr();

    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    printf("Enter Numbers: ");
    for(i=0; i<n1; i++) {
      scanf("%d", &a[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    printf("Enter Numbers: ");
    for(i=0; i<n2; i++) {
      scanf("%d", &b[i]);
    }

    printf("\n Common Numbers: ");
    for(i=0; i<n1; i++) {
      for(j=0; j<n2; j++) {
	if(a[i] == b[j]) {
	  printf("%d", a[i]);
	  break;
	}
      }
    }

    getch();
    return 0;
}