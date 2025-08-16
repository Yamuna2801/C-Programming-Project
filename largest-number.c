#include<stdio.h>
#include<conio.h>

int main() {
    int i, n;
    int arr[50], largest;
    clrscr();

    printf("Enter the Number: ");
    scanf("%d", &n);

    printf("Enter %d Numbers: ", n);

    for(i=0; i<n; i++) {
      scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for(i=0; i<n; i++) {
      if(arr[i] > largest) {
       largest = arr[i];
      }
    }
    printf("The largest number is: %d", largest);

    getch();
    return 0;
}