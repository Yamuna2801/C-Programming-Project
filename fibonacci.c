#include<stdio.h>
#include<conio.h>


int main() {
int i, n, a=0, b=1, next;
    clrscr();

    printf("Enter the Number: ");
    scanf("%d", &n);

    printf("Fibonacci Series: \n");
    for(i=0; i<n; i++) {
      printf("%d", a);
      next = a+b;
      a = b;
      b = next;
    }

    getch();
    return 0;
}