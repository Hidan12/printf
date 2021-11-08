include "main.h"

/**
 * print_num - print numbers
 * @p: int to print.
 * Return: the count of ints.
 */
int print_num(int p)
{
	int count = 0;

	if (p < 0)
	{
		p *= -1;
		_putchar('-');
	}

	if (p / 10)
	{
		print_num(p / 10);
	}
	_putchar((p % 10) + '0');

	while ((p / 10) > 9)
	{
		count++;
	}
	return (count++);
}
/**
 * var_d - Print decimal.
 * @list: set the list of the va_list.
 * Return: numbers counts.
 */

int var_d(va_list list)
{
	int d = 0;
	int count = 0;

	d = va_arg(list, int);
	count = print_num(d);
	return (count);
}
/**
 * var_i - Print integer
 * @list: set the list of the va_list.
 * Return: numbers counts.
 */
int var_i(va_list list)
{
	int i = 0;
	int count = 0;

	i = va_arg(list, int);
	count = print_num(i);
	return (count);
}

