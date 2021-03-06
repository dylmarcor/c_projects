#include <stdio.h>

int main(int argc, char *argv[]) {
	
	if (argc < 2) {
		// Return error if more nothing sent to the program								
		printf("ERROR: You need at least one argument\n");
		return 1;
	}

	int i = 0;
	int j = 0;
	char final_letter;

	for (j = 1; argv[j] != '\0'; j++) {
		for (i = 0; argv[j][i] != '\0'; i++) {

			char letter = argv[j][i];

			switch(letter) {
				case 'a':
				// Falls through here, and for letters 'E','I','O','U' and 'Y'
				case 'A':
					printf("%d: 'A'\n", i);
					break;

				case 'e':
				case 'E':
					printf("%d: 'E'\n", i);
					break;

				case 'i':
				case 'I':
					printf("%d: 'I'\n", i);
					break;
				
				case 'o':
				case 'O':
					printf("%d: 'O'\n", i);
					break;

				case 'u':
				case 'U':
					printf("%d: 'U'\n", i);
					break;

				case 'y':
				case 'Y':
					printf("Y\'s are weird ones...\n");
					if (i > 2) {
						printf("%d: 'Y'\n", i);
					}
					break;

				case ' ':
					printf("...space...\n");
					break;

				default:
					printf("%d: %c is not a vowel\n", i, letter);

			}
			if (argv[j][i] == '\0') {
				final_letter = '\0';
			}
		}
		if (final_letter == '\0') {
			printf("Finished!");
		} else {
			printf("\n\nNext Word\n\n");
		}
	}

	return 0;
}
