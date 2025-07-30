#include<stdio.h>

int fact(int n) {
    if(n == 1) {
      return 1;
    }else{
      return n*fact(n-1);
    }
}

void main() {
    int n; //result = 0;
    clrscr();

    printf("Enter the number:");
    scanf("%d", &n);
    gets(fact);

    printf("Factorial number: %d", fact(n));
    //result = fact(n);
    getchar();
}
