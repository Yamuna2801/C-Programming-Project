#include<stdio.h>
#include<conio.h>

int main() {
    int i, n, arr[50], j, temp;
    clrscr();

    printf("Enter the Numbers: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
      scanf("%d", &arr[i]);
    }

      for(i=0; i<n; i++) {
	for(j=i; j<n; j++) {
	 if(arr[i] < arr[j]) {
	   temp = arr[i];
	   arr[i] = arr[j];
	   arr[j] = temp;
	 }
       }
      }
      printf("Sort Array: ");
	 for(i=0; i<n; i++) {
	   printf("%d", arr[i]);
    }
    getch();
    return 0;
}