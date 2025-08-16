#include<stdio.h>
#include<conio.h>

int main() {
    int i, a, b, gcd;
    //clrscr();

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    for(i=1; i<=a && i<=b; i++) {
      if(a % i == 0 && b % i == 0) {
	gcd = i;
      }
 }

    printf("GCD: %d\n", gcd);

    getchar();
    return 0;
}