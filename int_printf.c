#include "main.h"
/**
 * _printf - Print something according the format
 *
 * @format: Elements format.
 *
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list ap;

	int index = 0;
	int i = 0;
	int j = 0;
	int v = 0;

	va_start(ap, format);
	for (; format[index]; index++)
	{
		if (format[index] == '%')
		{
			v = percent(format[index + 1]);
			if (v == 1)
			{
				j = find_fun(format[index + 1], ap);
				index += 2;
			}
			else if (format[index + 1] == '%')
			{
				index++;
			}
		}
		_putchar(format[index]);
	}
	va_end(ap);
	return (j + index);
}
