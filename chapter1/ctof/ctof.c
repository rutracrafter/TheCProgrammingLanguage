#include <stdio.h>

main() {
	float celcius, fahr;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	while (celcius <= upper) {
		fahr = (9.0/5.0) * celcius + 32.0;			
		printf("%3.0f\t%6.1f\n", celcius, fahr);
		celcius += step;
	}
}