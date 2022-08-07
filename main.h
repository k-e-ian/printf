#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.>

int _printf(const char *format, ...);

int _putchar(char c);

/**
 * buffer - a new type defining a buffer struct
 * @buffer - pointer to char array
 * @start - A pointer to the start of buffer
 * @length - length of the string stored in buffer.
 *
 */
typedef struct
{
	char *buffer;
	char *start;
	unsigned int length;
} buffer;

#endif
