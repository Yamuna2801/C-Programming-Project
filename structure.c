#include<stdio.h>
#include<string.h>

struct student {
       int roll;
       char name[30];
       float marks;
};

int main() {
    //int a = 5;
    struct student s1;
    struct student s2;
    s1.roll = 101;
    strcpy(s1.name, "Yamuna");
    s1.marks = 85.5;
    clrscr();

    printf("%d\n", s1.roll);
    printf("%s\n", s1.name);
    printf("%f\n", s1.marks);

    s2.roll = 102;
    strcpy(s2.name, "Jasmine");
    s2.marks = 95.5;

    printf("%d\n", s2.roll);
    printf("%s\n", s2.name);
    printf("%f\n", s2.marks);

    getchar();
    return 0;
}