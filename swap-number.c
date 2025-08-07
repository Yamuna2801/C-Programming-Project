#include<stdio.h>
#include<conio.h>

int main() {
    int a, b, temp;
    clrscr();

    printf("Enter the two number: ");
    scanf("%d%d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("a: %d\n", a);
    printf("b: %d", b);

    getch();
    return 0;
}