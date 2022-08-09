#include "main.h"

/**
 * _puts - print string char by char
 * @string: - pointer to string
 * Return: number of char printed
 *
 */

int _puts(char *string)
{
	int chars = 0;

	while (*string)
		chars += _putchar(*string++);
	return (chars);
}
