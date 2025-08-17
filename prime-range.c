#include<stdio.h>
#include<conio.h>

 isPrime(n) {
  int i;
  if(n<2)
  return 0;
  for(i=2; i<=n/2; i++) {
    if(n%i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
    int i, start, end;
    clrscr();

    printf("Enter the range: ");
    scanf("%d%d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for(i=start; i<=end; i++) {
      if(isPrime(i)) {
	printf("%d", i);
      }
    }

    getch();
    return 0;
}