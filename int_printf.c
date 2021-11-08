#include "main.h"
/**
 * int_printf - Print something according the format
 *
 * @format: Elements format.
 *
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	int (*ptr_f)(va_list list);
	va_list ap;

	int index = 0;
	int i = 0;
	int j = 0;

	va_start(ap, format);
	for (; format[index]; index++)
	{
		if (format[index] == '%' && format[index - 1] != 92)
		{
			for (; var_t[i].var; i++)
			{
				if (format[index + 1] == var_t[i].var[0])
				{
					ptr_f = var_t[i].c;
					break;
				}
			}

			if (*ptr_f)
			{
				j = ptr_f(ap);
				index += 2;
			}
		}
		if (format[index] != 92)
			_putchar(format[index]);
	}
	va_end(ap);
	return (j + index);
}
