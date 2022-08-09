#include "main.h"

/**
 * biC - binary convertor
 * @base10: decimal to be converted
 * Return: printed digits
 */
int biC(unsigned int base10)
{
	int num = 0;
	unsigned int b = base10;

	if ((b / 2) > 0)
		num += biC(b / 2);
	num += _putchar((b % 2) + '0');

	return (num);
}
