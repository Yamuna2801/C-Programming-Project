#include<stdio.h>

int add(int a, int b, int c) {
   return (a + b + c);
}

void main() {
     int x = 2;
     int y = 3;
     int z = 5;
     clrscr();
     printf("Sum of Given Integer: %d\n", add(x, y, z));
     printf("Sum of Given Integer: %d\n", add(x, y, z));
     printf("Sum of Given Float: %f\n", add(10.5, 15.75, 22.25));
     getchar();
}
