#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	// Go through each string given to command line "argv"
	for (i = 1; i < argc; i++) {
	    printf("arg: %d: %s\n", i, argv[i]);
	}

	// Now our own array
	char *states[] = {
	    "California", "Alaska",
	    "Washington", "Nevada"
	};

	int num_states = 4;

	for (i = 0; i < num_states; i++) {
	    printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}
