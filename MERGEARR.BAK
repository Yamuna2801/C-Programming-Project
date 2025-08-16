#include<stdio.h>
#include<conio.h>

int main() {
    int i, n, a[50], b[50], m[100];
    int n1, n2;
    clrscr();

    printf("Enter the size of first array: ");
    scanf("%d", &n1);
    printf("Enter the Numbers: \n");
    //scanf("%d", &n1);

    for(i=0; i<n; i++) {
      scanf("%d", &a[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    printf("Enter the Numbers: \n");
    //scanf("%d", &n2);

    for(i=0; i<n; i++) {
      scanf("%d", &b[i]);

      for(i=0; i<n1; i++) {
	m[i] = a[i];
	for(i=0; i<n2; i++) {
	  m[n1+i] = b[i];
	}
      }
      printf("Merged Array: ");
      for(i=0; i<n1 + n2; i++) {
	printf("%d", m[i]);
      }
    }
    getch();
    return 0;
}