#include<stdio.h>
#include<conio.h>

int main() {
    int n, sum, d1, d2, d3;
    clrscr();

    printf("Enter a three digit number: ");
    scanf("%d", &n);

    d1 = n / 100;
    d2 = (n / 10) % 10;
    d3 = n % 10;

    sum = (d1*d1*d1) + (d2*d2*d2) + (d3*d3*d3);

    if(sum == n) {
      printf("%d is a Armstrong Number \n", n);
    }else{
      printf("%d is not a Armstrong Number \n", n);
    }

    getch();
    return 0;
}