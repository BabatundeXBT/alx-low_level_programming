#include <stdio.h>

/**
 *main-Entry point
 *
 *Return:always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar("%c", ch);
	}
		_putchar('\n');

	return (0);
}