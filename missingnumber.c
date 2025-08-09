#include<stdio.h>
#include<conio.h>

int main() {
    int i, n, sum;
    clrscr();

    printf("Enter the Number: ");
    scanf("%d", &n);

    for(i=0; i<=n; i++) {
     sum = sum + i;
     if(i < n == 0) {
       printf("It's not a Missing Numbers: %d", n, sum);
     }else{
       printf("It's a Missing Numbers: %d", n, sum);
     }
     break;
    }

    getch();
    return 0;
}