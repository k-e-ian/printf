#include "main.h"

/**
 * _puts - prints string
 * @string: Pointer to string
 * Return: number of characters
 */

int _puts (char *string)
{
	int c = 0, i;

	for (i = 0; string[i] != '\0'; i++)
	{
		c += _putchar(string[i]);
	}
	return (c);
}
