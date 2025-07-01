#include<stdio.h>
#include<string.h>

int main() {
    char *name;
    clrscr();

    name = malloc(5);
    realloc(name, 100);
    strcpy(name, "Hello Yamuna!");

    printf("%s", name);
    getchar();
}