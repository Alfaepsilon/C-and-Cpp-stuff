#include <stdio.h>

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	printf("HEADING");
	for(celsius = 300; celsius >= 0; celsius = celsius - 20){
		fahr = 9.0/5.0 * celsius + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
	}
	return 0;
}
