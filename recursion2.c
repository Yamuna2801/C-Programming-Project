#include<stdio.h>

int factorial(int n) {
    if(n == 1) {
      return 1;
    }else{
      return n*factorial(n-1);
    }
}

void main() {
     clrscr();

     printf("The factorial number is : %d", factorial(6));

     getchar();
}
