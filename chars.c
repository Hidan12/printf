nclude "main.h"
/**
 * var_c - Print char.
 * @list: set the list of the va_list.
 * Return: the count of chars.
 */
int var_c(va_list list)
{
	int c;

	c = va_arg(list, int);
	_putchar (c);
	return (1);
}

/**
 * var_s - Print strings.
 * @list: set the list of the va_list.
 * Return: i that is the count of chars in the string.
 */

int var_s(va_list list)
{
	int i = 0;
	char *s = NULL;

	s = va_arg(list, char *);

	if (*s)
	{
		for (; s[i] != '\0'; i++)
		{
			_putchar (s[i]);
		}
	}
	return (i);
}
