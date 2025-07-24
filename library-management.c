#include<stdio.h>
#include<conio.h>
#include<string.h>

//Structure for library frontdesk
struct Library {
    char adminName[50];
    int adminId;
    char userName[50];
    int userId;
    int numberOfBooks;
    char requestedBooks[3][50];
};

//Structure for book
struct Book {
    char bookName[50];
    char authorName[50];
    int year;
    float price;
};
//Main method to handle users in the library management
int main() {
    struct Library frontDesk = {"Yamuna", 101, "", 0, 0, "" };
    struct Book details[5] = {
	 {"C Programming Language", "Dennis Ritchie", 1978, 250},
	 {"Data Structure", "Mark Allen Weiss", 1995, 300},
	 {"Machine Learning", "Tom Mitchell", 1997, 400},
	 {"Algorithms", "Robert Sedgewick", 1983, 350},
	 {"Artificial Intelligence", "Stuart Russell", 2010, 450}
};

    int i, j;
    //clrscr();

    //User Interface
    printf("------ Library Management ------\n");
    printf("Admin Name: %s\t", frontDesk.adminName);
    printf("Admin Id: %d\n\n", frontDesk.adminId);

      printf("\n------ User Information ------\n");
      printf("Enter User Name: ");
      scanf("%s", &frontDesk.userName);
      printf("Enter User ID: ");
      scanf("%d", &frontDesk.userId);
      printf("Enter Number of Books(limit-max 3): ");
      scanf("%d", &frontDesk.numberOfBooks);
      getchar();

	if(frontDesk.numberOfBooks!=0 && frontDesk.numberOfBooks <=3) {
	  for(i=0; i<frontDesk.numberOfBooks; i++) {
	    printf("Enter Book Name - %d:", i+1);
	    gets(frontDesk.requestedBooks[i]);
	  }
	}else{
	    printf("Select valid book count \n\n");
	}

      //Result
      printf("\n\n------ User Information ------\n");
      printf("User Name: %s\t", frontDesk.userName);
      printf("User ID: %d\n\n", frontDesk.userId);
      printf("Number Of Books: %d\n\n", frontDesk.numberOfBooks);
      printf("Books Name: \n");


      for(i=0; i<frontDesk.numberOfBooks; i++) {
	printf("%d.%s\n", i+1 , frontDesk.requestedBooks[i]);
	}

      printf("\n---- Checking Availability: ----\n");
      for(i = 0; i < 5; i++) {
	for(j = 0; j < 3; j++) {
	 if(strcmp(details[i].bookName, frontDesk.requestedBooks[j]) == 0){
	  printf("%s\n", details[i].bookName);
	 }
	}
      }

    getchar();
    return 0;

}