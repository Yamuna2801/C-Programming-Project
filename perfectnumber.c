#include<stdio.h>
#include<conio.h>

int main() {
    int i, num, sum = 0;
    clrscr();

    printf("Enter the Number: ");
    scanf("%d", &num);

    for(i=1; i<num; i++) {
      if(num % i == 0) {
	sum += i;
      }
    }

    if(sum == num) {
      printf("%d is a Perfect Number \n", num);
    }else{
      printf("%d is not a Perfect Number \n", num);
    }

    getch();
    return 0;
}