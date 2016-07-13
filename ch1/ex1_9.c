#include <stdio.h>

int main()
{
	int c;

	/* use a char variable to remember the previous character*/
	char prev = 0;
	while ((c = getchar()) != EOF)
	{
		/* skip multiple blanks */
		if (c == ' ' && prev == ' ')
			continue;
		else
		{
			prev = c;
			putchar(c);
		}
	}
}