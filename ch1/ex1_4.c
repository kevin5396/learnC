#include <stdio.h>

/* print Celsius-Fahrenheit Table
	for celsius = -20.0, -15.0, ..., 40.0; floating point version with header.*/
int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = -20.0;
	upper = 100.0;
	step = 10.0;

	/* print the header */
	printf("Celsius-Fahrenheit Table\n\n");
	printf("Celsius | Fahrenheit\n");

	celsius = lower;
	while (celsius <= upper)
	{
		fahr = celsius * (9.0/5.0) + 32.0;
		printf("%6.1f %9.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}