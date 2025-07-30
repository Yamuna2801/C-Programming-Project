#include<stdio.h>
#include<conio.h>

int fact(int n) {
    if(n == 1) {
     return 1;
    }else{
     return n*fact(n-1);
    }
}

void main() {
    int n;
    clrscr();


    printf("Enter the Number: ");
    scanf("%d", &n);
    gets(fact);

    printf("Factorial Number is: %d", fact(n));

    getchar();
}

