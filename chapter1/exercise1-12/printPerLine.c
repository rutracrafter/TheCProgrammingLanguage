#include <stdio.h>

#define TRUE 1
#define FALSE 0

main () {
	int c;
	int inWord = FALSE;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (inWord == TRUE) {
				putchar('\n');
				inWord = FALSE;
			}
		}
		else {
			putchar(c);
			inWord = TRUE;
		}
	}
}