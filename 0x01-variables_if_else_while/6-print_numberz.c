#include <stdio.h>
/**
 * main-Entry point
 * Description:prnts char below 10
 * Return:always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
