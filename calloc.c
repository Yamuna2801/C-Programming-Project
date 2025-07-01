#include<stdio.h>
#include<string.h>

int main() {

    char *name;
    clrscr();

    name = calloc(50, 1);
    strcpy(name, "Hello Yamuna!");

    printf("%s", name);

    getchar();
}



