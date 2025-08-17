#include<stdio.h>
#include<conio.h>

int main() {
    int i, n, total, sum = 0, missing, arr[20];
    clrscr();

    printf("Enter the Number: ");
    scanf("%d", &n);

    arr[n - 1];


    printf("Enter %d Number: ", n-1);
    for(i=0; i<n-1; i++) {
     scanf("%d", &arr[i]);
     sum = sum + arr[i];
    }

    total = n * (n + 1) / 2;
    missing = total - sum;

    printf("Missing Number: %d", missing);

    getch();
    return 0;
}