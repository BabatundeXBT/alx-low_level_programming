#include <stdio.h>
/**
 *main-Entry point
 *
 * Return:always 0 (success)
 */
int main(void)
{
	int c, i;

	for (c = '0'; c <= '9 9'; c++)
	{
		for (i = c + 1; i <= '9 9'; i++)
		{
			putchar('0' + c / 10);
			putchar('0' + c % 10);

			putchar(' ');

			putchar('0' + i / 10);
			putchar('0' + i % 10);

			if (c == 98 && i == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
