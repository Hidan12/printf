#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <strio.h>

/* Structures */
typedef struct var
{
	char *var;
	int (*c)(va_list ap);
} var;

/* Prototypes */
int int_printf(const char *format, ...);
int _putchar(char c);
int print_num(int p);
int var_c(va_list list);
int var_i(va_list list);
int var_s(va_list list);
int var_d(va_list list);

const static var var_t[] = {
	{'c', var_c},
	{'i', var_i},
	{'d', var_d},
	{'s', var_s},
	{NULL, NULL},
}

#endif