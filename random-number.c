#include<stdio.h>
#include<conio.h>

int main() {
    int i, n;
    clrscr();

    printf("Enter how many random numbers you want: ");
    scanf("%d", &n);

    srand(time(0));

    printf("Random Numbers: \n");
    for(i=0; i<n; i++) {
      printf("%d\n", rand());
    }

    getch();
    return 0;
}