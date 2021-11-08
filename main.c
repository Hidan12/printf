#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	/*int len;
	int len2;*/

	/*_printf("%sc%2\n");
	printf("%sc%2\n");*/
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	/*_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');*/
	_printf("String:[%s]\n", "I am a string !ncdl<fhñowiehfiohnfclksn<bAJEgbfAKJNCjl B bzfdjkkkwdkasjfkdsnkfjsdgkjgsfjkaskjdbasm,bcmdsbvmdsbvjdsbvjhdsvlkdsnv ds,vhsklhvks");
	printf("String:[%s]\n", "I am a string !ncdl<fhñowiehfiohnfclksn<bAJEgbfAKJNCjl	B bzfdjkkkwdkasjfkdsnkfjsdgkjgsfjkaskjdbasm,bcmdsbvmdsbvjdsbvjhdsvlkdsnv ds,vhsklhvks");
	/*len = printf("Percent:[%%%%%]\n");
	len2 = _printf("Percent:[%%%%%]\n");
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	len = printf("Percent:[%]\n");
	len2 = _printf("Percent:[%]\n");*/
	return (0);
}
