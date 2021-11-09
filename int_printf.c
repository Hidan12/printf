#include "main.h"
/**
 * _printf - Print something according the format
 * @format: Elements format.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list ap;

	int index = 0;
	int percents = 0;
	int j = 0;
	int v = 0;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	for (; format[index]; index++)
	{
		if (format[index] == '%')
		{
			v = percent(format[index + 1]);
			if (v == 1)
			{
				percents += 2;
				j = find_fun(format[index + 1], ap);
				index += 2;
				}
			else if (format[index + 1] == '%')
			{
				index++;
				percents++;
			}
		}
		if (v == 0)
			_putchar(format[index]);
		if (v != 0)
		{
			index--;
			v = 0;
		}
	}
	va_end(ap);
	index -= percents;
	return (j + index++);
}
