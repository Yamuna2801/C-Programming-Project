#include<stdio.h>

struct Library {
    char adminName[50];
    int adminId;
    char userName[50];
    int userId;
    int numberOfBooks;
    char requestedBooks[3][50];
};

struct Book {
    char bookName[50];
    char authorName[50];
    int year;
    float price;
};

int main() {
    struct Library frontDesk = {"Yamuna", 101, "", 0, 0, "" };
    struct Book Details[5] = {
	 {"C Programming Language", "Dennis Ritchie", 1978, 250},
	 {"Data Structure", "Mark Allen Weiss", 1995, 300},
	 {"Machine Learning", "Tom Mitchell", 1997, 400},
	 {"Algorithms", "Robert Sedgewick", 1983, 350},
	 {"Artificial Intelligence", "Stuart Russell", 2010, 450}
      };

    int i;
    //char bookName1[10];
    //char bookName2[10];
    //char bookName3[10];
    clrscr();

    printf("------ Library Management ------\n");
    printf("Admin Name: %s\t", frontDesk.adminName);
    printf("Admin Id: %d\n\n", frontDesk.adminId);

      printf("------ User Information ------\n");
      printf("Enter User Name: ");
      scanf("%s", &frontDesk.userName);
      printf("Enter User ID: ");
      scanf("%d", &frontDesk.userId);
      printf("Enter Number of Books(limit-max 3): ");
      scanf("%d", &frontDesk.numberOfBooks);
	if(frontDesk.numberOfBooks!=0 && frontDesk.numberOfBooks <=3) {
	  for(i=0; i<frontDesk.numberOfBooks; i++) {
	    printf("Enter Book Name - %d:", i+1);
	    scanf("%s", &frontDesk.requestedBooks);
	    //scanf("%s", &bookName1);
	    //scanf("%s", &bookName2);
	    //scanf("%s", &bookName3);
	  }
	}else{
	    printf("Select valid book count \n\n");
	}

      printf("------ User Information ------\n");
      printf("User Name: %s\t", frontDesk.userName);
      printf("User ID: %d\n\n", frontDesk.userId);
      printf("Number Of Books: %d\n\n", frontDesk.numberOfBooks);

    getchar();
    return 0;
}