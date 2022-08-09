#include "main.h"

/**
 * _printf - print on stdout, considersing cases 's' and 'c' and '%c'
 * @format: pointer to const directive
 * Return: num of characters printed
 */
int _printf(const char *format, ...)
{
	int num = 0, index;/* num to keep track of characters being printed */
	/* index to allow looping through each character at a time */
	va_list args; /*creating a variadic list called args */

	va_start(args, format);/*initialises args*/
	for (index = 0; format[index] != '\0'; ) /* (hello\0) */
	{
		if (format[index] != '%') /*_printf("hello") */
		{
			num += _putchar(format[index]);
			index++;
		}
		else if (format[index] == '%' && format[index + 1] != ' ')
		{/*if format[index + 1] is either 'c' 's' or '%'*/
			switch (format[index + 1]) /* _printf("%c hello", 'I') */
			{
				case 'c':
					num += _putchar(va_arg(args, int));
					break;
				case 's': /** _printf("%s", "hello there"); **/
					num += _puts(va_arg(args, char *));
					break;
				case '%':
					num += _putchar('%');
					break;
				case 'd': /** _printf("%d%d", 500, -2222); */
				case 'i':/** _printf("%i%i", 20, -30); */
					num += _putd(va_arg(args, int));
					break;
				case 'b':
					num += biC(va_arg(args, unsigned int));
				default:
					break;
			}
			index += 2;
		}
	}
	va_end(args);
	return (num);
}
