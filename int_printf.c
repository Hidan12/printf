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
	int percents = 0;
	int j = 0;
	int v = 0;
	int  count = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
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
				j += find_fun(format[index + 1], ap);
				index += 2;
			}
			else if (format[index + 1] == '%')
			{
				index++;
				percents++;
			}
		}
		if (format[index] != '\0' && v == 0)
			_putchar(format[index]);
		else
			index--;
		v = 0;
	}
	index -= percents;
	va_end(ap);
	count = j + index;
	return (count);
}
