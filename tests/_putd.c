#include "main.h"

/**
 * _putd - print decimal
 * @dec: integer to be printed
 * Return: count of integers printed
 */
int _putd(int dec)
{
	unsigned int n = dec;
	int num = 0;

	if (dec < 0)
	{
		num += _putchar('-');
		n = -n;
	}
	if ((n / 10) > 0)
		num += _putd(n / 10);
	num += _putchar((n % 10) + '0');

	return (num);
}
