#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int numbers[4] = { 0 };
	char name[4] = { 'a' };

	// First, print raw
	printf("numbers: %d %d %d %d\n",
			numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("name each: %c %c %c %c\n",
			name[0], name[1], name[2], name[3]);

	// Set up numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	// Set up the name
	name[0] = 'D';
	name[1] = 'e';
	name[2] = 'a';
	name[3] = '\0';

	// Then print them out initialized
	printf("numbers: %d %d %d %d\n",
			numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("name each: %c %c %c %c\n",
			name[0], name[1], name[2], name[3]);

	// Print the name like a string
	printf("name: %s\n", name); 

	// Another way to use the name var
	char *another = "Dyl";

	printf("another: %s\n", another);

	printf("another each: %c %c %c %c\n",
		       another[0], another[1], another[2], another[3]);

	return 0;
}	