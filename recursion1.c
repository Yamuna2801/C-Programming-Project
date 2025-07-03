/*#include<stdio.h>

int numbers(int n) {
    return n++;
}

void main() {
     int n;
     clrscr();

     printf("Enter the number:");
     scanf("%d", &n);
     gets(numbers);

     printf("Entered number: %d", numbers(n));
     getchar();
}*/
#include<stdio.h>

int numbers(int n) {
     if(n > 10)
     return;
     printf("%d\n", n);
     numbers(n + 1);

}

void main() {
    //int n;
    clrscr();

    numbers(1);

    getchar();
}