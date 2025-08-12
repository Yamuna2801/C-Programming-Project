#include<stdio.h>
#include<conio.h>

int main() {
    int i, n;
    long fact = 1;
    clrscr();

    printf("Enter the Number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
      fact = fact * i;
    }

    printf("Factorial Number: %d", fact);

    getch();
    return 0;
}