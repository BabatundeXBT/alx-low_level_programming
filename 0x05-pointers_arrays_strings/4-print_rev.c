#include "main.h"

/**
 * print_rev-prints astring, in reverse, followed by a new line
 * @j:input string
 *
 * Return:no return
 */

void print_rev(char *j)
{
	int count = 0;

	while (count >= 0)
	{
		if (j[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(j[count]);
	_putchar('\n');
}
