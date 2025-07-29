#include<stdio.h>
#include<string.h>
#include<conio.h>

int main() {
    int i, len;
    char name[10];
    clrscr();

    printf("Enter Your Name: ");
    gets(name);

    len = strlen(name);

    printf("Reversed Name: \n");
    for(i=len-1; i>=0; i--) {
    printf("%c", name[i]);
    }

    getchar();
    return 0;
}