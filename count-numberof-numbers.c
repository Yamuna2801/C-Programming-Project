#include<stdio.h>
#include<conio.h>

int main() {
    int i, n, count = 0;
    clrscr();

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n == 0) {
      count = 1;
    }else{
      while (n != 0) {
	n = n / 10;
	count++;
      }
    }
    printf("No of digits: %d", count);

    getch();
    return 0;
}
