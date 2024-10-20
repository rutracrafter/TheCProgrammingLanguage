#include <stdio.h>

main() {
	int c;
	long seq;
	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			putchar(c);
			if (seq != 0) {
				seq = 0;
			}
		}
		else {
			if (seq == 0) {
				putchar(' ');
				++seq;
			}
		}
	}
}