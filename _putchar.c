#include "main.h"

/**
 * _putchar - Prints characters
 * @c: Character to be printed
 * Return: Number of characters printed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
