#include<stdio.h>

void getInputOfArray(int num, int array[]) {
   int i = 0;
   while(i < num) {
     printf("Enter the value for arrNum[%d]: ", i);
     scanf("%d", &array[i]);
     i++;
   }
   array[i] = '\0';

}

void manipulateGivenArray(int number,int array[]) {
       int i = 0;
	while(i < number) {
	   array[i] = array[i] + 10;
	   i++;
	}
}

void printGivenArray(int array[]){
   int index = 0;
   while(array[index] != '\0') {
	printf("Value at element of arrNum[%d]: %d\n", index, array[index]);
	index++;
   }
}

// getElementById(id)

// getElementsByTagName(tagName)

void main() {
	int i, n, length;
	int arrNum[20];
	clrscr();

	printf("Array Manipulation\n");

	printf("*******************\n");
	printf("Enter the number of input(1-20): ");
	scanf("%d", &n);
	if(n < 1) {
	  printf("Error: The given number doesn't meet the minimum requirement");
	} else if(n > 20) {
	  printf("Error: The given number of input exceeds the limit");
	} else {
	  getInputOfArray(n, arrNum);
	  printf("The original array values:\n");
	  printf(" ****************************\n");
	  printGivenArray(arrNum);
	  manipulateGivenArray(n, arrNum);
	  printf("The manipulated array values:\n");
	  printf("****************************\n");
	  printGivenArray(arrNum);
	}
	// length = getLenOfArray(arrNum);
	// printf("Length of an Array: %d", length);

	scanf("%d", &n);
	// getchar();
}