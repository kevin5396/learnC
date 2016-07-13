#include <stdio.h>

int main()
{
	long blanks, tabs, newlines;
	int c;

	blanks = tabs = newlines = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++blanks;
		else if (c == '\t')
			++tabs;
		else if (c == '\n')
			++newlines;
	}
	printf("#blanks : %ld\n#tabs : %ld\n#newlines : %ld\n", blanks, tabs, newlines);
}