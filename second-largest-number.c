#include<stdio.h>
#include<conio.h>

int main() {
    int i, n;
    int arr[50], largest, second;
    clrscr();

    printf("Enter the Numbers: ");
    scanf("%d", &n);

    printf("Enter %d Numbers: ", n);

    for(i=0; i<n; i++) {
      scanf("%d", &arr[i]);
    }

      largest = second = arr[0];

      for(i=1; i<n; i++) {
	if(arr[i] > largest) {
	  second = largest;
	  largest = arr[i];
	}else if(arr[i] > second && arr[i] != largest) {
	  second = arr[i];
	}
      }
      printf("Second largest number: %d", second);

    getch();
    return 0;
}