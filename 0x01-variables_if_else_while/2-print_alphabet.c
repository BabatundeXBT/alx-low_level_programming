#include <stdio.h>
/**
 * main - Entry point
 * description: prints alphabet in lowercase\n
 * Return: always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
			putchar(ch);
	}
			putchar('\n');

	return (0);
}
