#include<stdio.h>
#include<conio.h>

int main() {
    char name[20];
    clrscr();

    printf("Enter a string: ");
    //scanf("%s", &name);
    gets(name);

    if(name[0] == '\0') {
      printf("The string is empty. \n");
    }else{
      printf("The string is not empty. \n");
    }

    getchar();
    return 0;
}