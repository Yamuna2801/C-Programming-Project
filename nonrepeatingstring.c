#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
    int i, j, n;
    char name[10];
    int repeated;
    clrscr();

    printf("Enter the Name: ");
    scanf("%s", name);

    n = strlen(name);

    for(i=0; i<=n; i++) {
      repeated = 0;
      for(j=0; j<=n; j++) {
	if(name[i] == name[j] && i != j) {
	  repeated = 1;
	  break;
      }
    }

    if(repeated) {
      printf("Repeated Name: %c\n", name[i]);
    }else{
      printf("Non-Repeated Name: %c\n", name[i]);
    }
  }

    getch();
    return 0;
}