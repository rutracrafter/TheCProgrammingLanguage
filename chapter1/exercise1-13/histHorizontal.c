#include <stdio.h>

#define TRUE  1
#define FALSE 0

int main() {
	int c;
	int inWord = FALSE;
	int wordCharCount = 0;
	int wc = 0;
	float wordLengths[20];

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

	float max = wordLengths[0];
	float min = wordLengths[0];

	for (int i = 0; i < 20; i++) {
		if (wordLengths[i] < min) {
			min = wordLengths[i];
		}
		if (wordLengths[i] > max) {
			max = wordLengths[i];
		}
	}

	for (int i = 0; i < 20; i++) {
		wordLengths[i] = 20 * ((wordLengths[i] - min) / (max - min));
	}	

	for (int i = 0; i < 20; i++) {
		printf("%2.0f letters: ", (float) i);
		for (int j = 0; j < (int) wordLengths[i]; j++) {
			printf("*");	
		}
		printf("\n");	
	}	
	printf("Total number of words: %d\n", wc);
	printf("Max frequency: %.0f\n", max);
	printf("Min frequency: %.0f\n", min);
}
