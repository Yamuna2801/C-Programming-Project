#include<stdio.h>

void byReference(int *x) {
     *x = *x + 10;
}

void byValue(int x) {
	x = x + 10;
}

int main() {
    int a = 30;

    clrscr();

    printf("a = %d Before byValue\n", a);
    byValue(a);
    printf("a = %d After byValue\n", a);
    printf("---------------------------------\n");
    printf("a = %d Before byReference\n", a);
    byReference(&a);
    printf("a = %d After byReference\n", a);

    getchar();
    return 0;
}