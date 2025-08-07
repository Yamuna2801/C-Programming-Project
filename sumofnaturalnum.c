#include<stdio.h>
#include<conio.h>

int main() {
    int i, n, sum;
    clrscr();

    printf("Enter the numbers: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
      sum = sum + i;
      printf("%d", i);

      if(i < n) {
	printf("+");
      }
    }
    printf("Sum of Number: %d\n", n, sum);

    getch();
    return 0;
}