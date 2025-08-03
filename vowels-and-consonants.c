#include<stdio.h>
#include<conio.h>

int main() {
    char ch;
    clrscr();

    printf("Enter any word: ");
    scanf("%s", &ch);


    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
      printf("Vowels");
    }else{
      printf("Consonants");
    }
    getch();
    return 0;
}
