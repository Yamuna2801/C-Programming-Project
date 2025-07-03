#include<stdio.h>

int main() {
    int arrPrime[20];
    int arrNotPrime[20];
    int i, n;
    //clrscr();

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n <= 1) {
      printf("The given number is not a prime: %d\n", n);
      return;
    }

    for(i=2; i<=n; i++) {
      if(n%i == 0) {
	printf("The given number is not a prime: %d\n", n);
	return;
      }else{
	printf("The given number is a prime: %d\n", n);
	return;
      }
    }
    getchar();
    return 0;
}


