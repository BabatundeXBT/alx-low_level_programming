#include "main.h"
/**
 * _strlen-finds the lenght of a string
 * @s:string pointer to the stringwhose lenght is to be found
 * Return:returns the lenght of the string
 */

int _strlen(char *s)
{
	int p = 0;
	/*increament up to when the last character is NULL,\o*/
	while (*(s + p) != o)
	{
		p++;
	}
	return (p);
}
