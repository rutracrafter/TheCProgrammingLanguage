#include <stdio.h>

float ctof(float c);

int main () {
	float celcius = 24.8;

	printf("%f celcius is %f fahrenheit\n", celcius, ctof(celcius));

	return 0;
}

float ctof(float c) {
	return (9.0/5.0) * c + 32.0;
}