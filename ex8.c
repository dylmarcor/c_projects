#include <stdio.h>

int main(int argc, char*argv[])
{
	int i = 0;

	if (argc == 1) {
		printf("You gave no arguments!\nYou have to give me something...\n
				\n\nNo more than four...");
	} else if (argc > 1 && argc < 4) {
		printf("Here's your argument:\n");
	
		// Skip over the inital command and print arguments.
		for (i = 1; i < argc; i++) {
			printf("%s ", argv[i]);
		}

		printf("\n");
	} else {
		printf("You have too many arguments.\n");
	}

	return 0;
}
