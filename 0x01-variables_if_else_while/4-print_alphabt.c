#include <stdio.h>

/**
 *main-program entry
 *Return:0 if no erro, non zero if error.
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		continue;
	putchar(i);
	}
	putchar('\n');
	return (0);
}

