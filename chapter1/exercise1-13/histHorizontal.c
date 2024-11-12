#include <stdio.h>

#define TRUE  1
#define FALSE 0

int main() {
	int c;
	int inWord = FALSE;
	int wordCharCount = 0;
	int wc = 0;
	int wordLengths[20];

	for (int i = 0; i < 20; i++) {
		wordLengths[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			inWord = FALSE;
		}
		else if (inWord == FALSE) {
			if (wordCharCount != 0) {
				++wordLengths[wordCharCount];
			}
			++wc;
			wordCharCount = 0;
			++wordCharCount;
			inWord = TRUE;
		}
		else {
			++wordCharCount;
		}
	}

	for (int i = 0; i < 20; i++) {
		printf("Words of length %d: %d", i, wordLengths[i]);
		printf("\n");
	}	
	printf("Total number of words: %d", wc);
	printf("\n");
}
