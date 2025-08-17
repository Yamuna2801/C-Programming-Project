#include<stdio.h>
#include<conio.h>

int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2, i, j;
    clrscr();

    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements: ", n1);
    for(i=0; i<n1; i++) {
      scanf("%d", &arr1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    printf("Enter %d Number: ", n2);
    for(i=0; i<n2; i++) {
      scanf("%d", &arr2[i]);
    }

    for(i=0; i<n1; i++) {
      merged[i] = arr1[i];
    }

    for(j=0; j<n2; j++) {
      merged[i] = arr2[j];
      i++;
    }

    printf("Merged Array: ");
    for(i=0; i<n1 + n2; i++) {
      printf("%d", merged[i]);
    }

    getch();
    return 0;
}