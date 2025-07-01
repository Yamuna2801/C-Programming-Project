#include<stdio.h>

int getSubjectCount() {
	int subjectCount;
	printf("Enter the number of subjects: ");
	scanf("%d",&subjectCount);
	return subjectCount;
}

char* getSubjects(int n) {
	int i = 0, len = 0;
	char subject[10][20];

	while(i < n){
		printf("Enter name of subject %d: \n", i + 1);
		// scanf("\n%c", &subject[i]);
		getchar();
		gets(subject[i]);
		// scanf("\n%19s", subject[i]);
		// fgets(subject[i], sizeof(subject[i]), stdin);
		len = 0;
		while(subject[i][len] != '\0') {
			if(subject[i][len] == '\n') {
				subject[i][len] = '\0';
				break;
			}
			len++;
		}
		i++;
	}
	return subject;
}

int* getMarks(int n, char subjects[10][20]) {
	int i = 0, marks[20];
	while(i < 20) {
	  //printf("%19s", subjects[i]);
	  puts(subjects[i]);
	  i++;
	}
	i = 0;
	while(i < n){
		printf("Enter mark in %19s: ", subjects[i]);
		scanf("%d", &marks[i]);
		i++;
	}
	return marks;
}

int getTotal(int n, int marks[]) {
	int i = 0, sum = 0;
	while(i < n) {
	   sum+=marks[i];
	   i++;
	}
	return sum;
}

void main() {
	int subjectCount;
	int* marks;
	char *subjects;

	clrscr();

	printf("Student Marksheet\n");
	printf("------------------\n");

	subjectCount = getSubjectCount();
	subjects = getSubjects(subjectCount);
	marks = getMarks(subjectCount, subjects);

	printf("---------------------------\n");
	printf("Total of given marks: %d", getTotal(subjectCount, marks));

	getch();
}