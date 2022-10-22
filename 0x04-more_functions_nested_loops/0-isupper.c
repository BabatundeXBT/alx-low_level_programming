#include "main.h"

/**
 * _isupper - check if a character is upper case or not
 * @c: contain the character
 * Return: 1 if uppercase and 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
