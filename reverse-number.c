#include<stdio.h>
#include<conio.h>

int main() {
    int number, reverse = 0, digit;
    clrscr();

    printf("Enter the Number: ");
    scanf("%d", &number);

    while (number != 0) {
    digit = number % 10;
    reverse = reverse * 10 + digit;
    number = number / 10;
    }
    printf("Reversed Number: %d\n", reverse);

    getch();
    return 0;

}