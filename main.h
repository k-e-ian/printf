#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);

int _putchar(char c);

int _puts(char *string);

int _putd(int dec);

int biC(unsigned int base10);

#endif
