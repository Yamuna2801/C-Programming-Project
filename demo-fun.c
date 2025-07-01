/*#include<stdio.h>

int add(int a, int b, int c, int d, int e) {
     return (a + b + c + d + e);
}

void main() {
     char T = 35;
     char E = 40;
     char M = 45;
     char S = 50;
     char SS = 60;
     int total;
     clrscr();

      total = add(T, E, M, S, SS);
      printf("The total marks of all subjects is: %d\n", total);

     getchar();
}*/
#include<stdio.h>

int addTheInput(int n ,int addReg[]) {
    int i = 0, sum = 0;
    while(i < n) {
     sum += addReg[i];
      //printf("Attach the register number: %d", regNum);
    }
    return sum;
}

void main() {
     char name[10];
     int regNum[10];
     int i, n;
     clrscr();

     printf("Enter the students names:");
     printf("Enter the register number:");
     scanf("%s", &n);
     gets(name);

     printf("Entered names: %s", name);
     printf("Entered register number: %d", regNum);
     register = addTheInput(n, addReg);

     getchar();
}