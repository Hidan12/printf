#include "main.h"
/**
 * percent - Case indentifier.
 * @u: recive a character and do the comparsion.
 * Return: 1 if true and 0 if false.
 */

int percent(char u)
{
	char ptr[] = {'c', 'i', 'd', 's'};
	int count = 0;

	for (; count < 4; count++)
	{
		if (ptr[count] == u)
		{
			return (1);
		}
	}
	return (0);
}

/**
 * find_fun - Find the correct function.
 * @m: recive the next character.
 * @ap: is the format's list.
 * Return: the correct function.
 */

int find_fun(char m, va_list ap)
{
	int (*ptr_f)(va_list list);
	int i = 0;
	int j = 0;

	for (; var_t[i].var; i++)
	{
		if (m == var_t[i].var[0])
		{
			ptr_f = var_t[i].c;
			break;
		}
	}
	j = ptr_f(ap);
	return (j);
}
