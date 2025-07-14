#include<stdio.h>
#include<string.h>

struct record {
     int roll;
     char name[50];
     int marks;
};


int main() {
    struct record students[50];
    int i, n;
    //clrscr();

    printf("How many students? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {

      printf("Enter the details for students %d:\n", i+1);
      printf("Enter Roll Number: ");
      scanf("%d", &students[i].roll);

      printf("Enter Name: ");
      scanf("%s", &students[i].name);

      printf("Enter Marks: ");
      scanf("%d", &students[i].marks);

    }

    printf("\n--- Student Records ---\n");
    for(i = 0; i < n; i++) {
      printf("Student %d:\n", i+1);
      printf("Roll Number: %d\n", students[i].roll);
      printf("Name: %s\n", students[i].name);
      printf("Marks: %d\n\n", students[i].marks);
    }

    getchar();
    return 0;
}