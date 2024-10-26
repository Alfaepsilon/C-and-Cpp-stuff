#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
	float fahr, celsius;
	
	fahr = LOWER;
	printf("HEADING");
	for(celsius = UPPER; celsius >= LOWER; celsius = celsius - STEP){
		fahr = 9.0/5.0 * celsius + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
	}
	return 0;
}
