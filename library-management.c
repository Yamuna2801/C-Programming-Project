#include<stdio.h>
#include<string.h>


struct Library {
    char adminName[50];
    int adminId;
    char userName[50];
    int userId;
    int numberOfBooks;
    char requestedBooks[50];
};

struct Book {
    char bookName[50];
    int price;
    char authorName[50];
    int year;
};

int autoGenUserId = 1;

int main() {
    struct Library frontDesk = {"Yamuna", 101, "", 0, 0, "" };
    int i, n;
    //clrscr();

    printf("------ Library Management ------\n");
    printf("Admin Name: %s\t", frontDesk.adminName);
    printf("Admin Id: %d\n\n", frontDesk.adminId);

    printf("------ User Information ------\n");
      printf("Enter User Name: ");
      scanf("%s", &frontDesk.userName);
      frontDesk.userId = autoGenUserId++;
      //printf("Enter User ID: ");
      //scanf("%d", &frontDesk.userId);
      printf("Enter Number of Books(limit-max 3): ");
      scanf("%d", &frontDesk.numberOfBooks);
	if(frontDesk.numberOfBooks >= 3 || 0) {
	  printf("Select valid book count \n\n");
	}

      printf("------ User Information ------\n");
      printf("User Name: %s\t", frontDesk.userName);
      printf("User ID: %d\n\n", frontDesk.userId);
      printf("Number Of Books: %d\n\n", frontDesk.numberOfBooks);


    getchar();

}