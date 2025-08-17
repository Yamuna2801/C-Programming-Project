#include<stdio.h>
#include<conio.h>

int main() {
    int num, binary[32], i = 0;
    clrscr();

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while(num > 0) {
      binary[i] = num % 2;
      num = num / 2;
      i++;
    }

    printf("Binary: ");
    for(i=i-1; i>=0; i--) {
      printf("%d", binary[i]);
    }

    getch();
    return 0;
}