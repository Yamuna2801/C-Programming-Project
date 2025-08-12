#include<stdio.h>
#include<conio.h>

int main() {
    int year;
    //clrscr();

    printf("Enter the year: ");
    scanf("%d", &year);

    if(year % 400 == 0) {
      printf("%d is a Leap Year \n", year);
    }else if(year % 100 == 0) {
      printf("%d is not a Leap Year \n", year);
    }else if(year % 4 == 0) {
      printf("%d is a Leap Year \n", year);
    }else{
      printf("%d is Not a Leap Year \n", year);
    }

    getch();
    return 0;
}