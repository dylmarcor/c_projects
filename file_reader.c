#include <stdio.h>

int main(int argc, char *argv[]) {

	if (argc != 2) {

		// Explain how program should execute
		printf("Usage: %s <filename>", argv[0]);

	} else {

		// Argv[1] is meant to be filename
		FILE *file = fopen(argv[1], "r");

		if (file == 0) {

			printf("Could not open file\n");

		} else {

			int x;

			while ((x = fgetc(file)) != EOF) {

				printf("%c", x);

			}

			fclose(file);

		}
	}
}

