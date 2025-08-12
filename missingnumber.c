#include<stdio.h>
#include<conio.h>

int main() {
    int i, n, total, sum, arr[1];
    clrscr();

    printf("Enter the Number: ");
    scanf("%d", &n);

    arr[n - 1];

    printf("Missing Number: %d", n-1, n);
    for(i=0; i<n; i++) {
     scanf("%d", &arr[i]);
    }

    total = n * (n + 1) / 2;
    sum = 0;
     for(i=0; i<n-1; i++) {
       sum+= arr[i];
     }

     //missing = total - sum;
     printf("Missing Number: %d\n", total - sum);

    getch();
    return 0;
}