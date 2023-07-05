/*
   Issues that need fixing.
   When entered a book and returns to the title screen.
   If you try and enter in a new book it writes over the previous one.
*/
#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE

int n, i, input;

void write();
void print();

struct Book {
	char name[30];
	int numPage;
};

struct Book book[50];

// Main Function that displays selection screen.
int main() {

	printf("1. Write\t 2. Print\n");
	printf("Enter input: ");
	scanf("%d", &input);

	if (input == 1) {
		write();
	}
	else if (input == 2) {
		print();
	}
	else {
		printf("Not a Valid Input!\n");
		main();
	}
	return 0;
}

// Function that Writes
void write(){

	printf("Please Enter In Number of books: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {

		printf("Please Enter Book Name: ");
		scanf("%s", book[i].name);

		printf("Please Enter Number of Pages: ");
		scanf("%d", &book[i].numPage);
	}
	main();
}

// Function that prints
void print() {
	for (i = 0; i < n; i++) {
		printf("Book Name: %s\n", book[i].name);
		printf("# of Pages: %d\n", book[i].numPage);
	}
	main();
}