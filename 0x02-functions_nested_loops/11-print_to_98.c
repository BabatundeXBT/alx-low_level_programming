#include "main.h"

/**
 * print_to_98 -> prints all natural numbers fron n to 98
 * @n: number is to start counting
 *
 */
void print_to_98(int n)
{
	for (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d", n);
	}
}
