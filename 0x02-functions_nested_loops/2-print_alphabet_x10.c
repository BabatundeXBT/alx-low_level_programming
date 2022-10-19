#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_×10 -> prints the lowercase alphabet
 *
 *Return:always 0 (success)
 */
void print_alphabet_×10(void)
{

	char ch;
	int x;

	for (x =0; x <= 10; x++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
