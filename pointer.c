#include<stdio.h>

int main() {
     int *a;
     int d = 15;
     a = &d;
     clrscr();

     printf("%d\n", a);
     printf("%d", *a);

     getchar();
     return 0;
}