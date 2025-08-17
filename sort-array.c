#include<stdio.h>
#include<conio.h>

int main() {
    int i, n, arr[50], j, temp;
    clrscr();

    printf("Entersize: ");
    scanf("%d", &n);

    printf("Enter Numbers: ");
    for(i=0; i<n; i++) {
      scanf("%d", &arr[i]);
    }

      for(i=0; i<n-1; i++) {
	for(j=i+1; j<n; j++) {
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