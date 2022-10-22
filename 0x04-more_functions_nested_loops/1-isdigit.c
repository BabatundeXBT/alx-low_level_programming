#include "main.h"

/**
 * _isdigit - checks for digit 0 through 9
 *
 * @c: digit is checked
 *
 * Return: 1 if digit is 0 through 9 or 0 if flase
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar("\n");
}
