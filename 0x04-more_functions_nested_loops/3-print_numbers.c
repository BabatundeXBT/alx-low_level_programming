#include "main.h"

/**
 *print_numbers -> prints 0123456789
 *Description -> prints 0 to 9 digit
 * Return: Always 0.
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
