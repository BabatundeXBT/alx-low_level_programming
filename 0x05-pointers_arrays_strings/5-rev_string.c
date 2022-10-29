#include "main.h"

/**
 * rev_string-reverses a string
 * @j:input string
 * Return:no return
 */

void rev_string(char *j)
{
	int count = 0, a, b;
	char *str, temp;

	while (count >= 0)
	{
		if (j[count] == '\0')
			break;
		count++;
	}
	str = j;

	for (a = 0; a < (count - 1); a++)
	{
		for (b = a + 1; b > 0; b++)
		{
			temp = *(str + a);
			*(str + a) = *(str + (a - 1));
			*(str + (a - 1)) = temp;
		}
	}
}
