/*#include <stdio.h>

int main() {
  FILE *fp;
  char c[100];
  //clrscr();

  // Create a file on your computer (filename.txt)
  fp = fopen("for-loop.txt", "r");

  fgets(c, 6, fp);
  printf("%s", c);
  // Close the file
  //fclose(fptr);

  getchar();
  return 0;
}*/






#include<stdio.h>
#include<string.h>

struct student {
       char name[50];
       int roll;
       float marks;
};

int main() {
    struct student students[100];
    int i, n;
    clrscr();

    printf("How many students? ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
      printf("Enter the details for student %d:\n", i+1);
      printf("Name: ");
      scanf("%s", &students[i].name);
      printf("Roll Number: ");
      scanf("%d", &students[i].roll);
      printf("Marks: ");
      scanf("%f", &students[i].marks);
    }

    getchar();
    return 0;
}



