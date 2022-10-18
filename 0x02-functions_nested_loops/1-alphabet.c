#include <stdio.h>
#include "main.h"

/**
 *Description:print_alphabet in lower case
 *
 *Return:always 0 (success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
