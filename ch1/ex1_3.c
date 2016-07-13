#include <stdio.h>

/* print Fahrenheit-Celsius Table
	for fahr = 0, 20, ..., 300; floating point version with header.*/
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	/* print the header */
	printf("Fahrenheit-Celsius Table\n\n");
	printf("Fahrenheit | Celsius\n");

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%6.0f %12.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}