#include <stdio.h>

main () {
	int c;
	double blanks, tabs, newlines;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++blanks;	
		}
		else if (c == '\t') {
			++tabs;	
		}
		else if (c == '\n') {
			++newlines;	
		}
	}

	printf("Blanks: %.0f, Tabs: %.0f, Newlines: %.0f\n", blanks, tabs, newlines);
}