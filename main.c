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
    int len;
    int len2;
    unsigned int ui;
    void *addr;


    len = printf("%d\n", 0);
    len2 = _printf("%d\n", 0);
    printf("%d\n", len);
    _printf("%d\n", len2);
    _printf("---------------\n");
    len = printf("%d\n", -0);
    len2 = _printf("%d\n", -0);
    printf("%d\n", len);
    _printf("%d\n", len2);
     _printf("---------------\n");
    len = printf("%d\n", 0000);
    len2 = _printf("%d\n", 0000);
    printf("%d\n", len);
    _printf("%d\n", len2);
     _printf("---------------\n");
    len = printf("%d\n", "2d34");
    len2 = _printf("%d\n", "2d34");
    printf("%d\n", len);
    _printf("%d\n", len2);
     _printf("---------------\n");
    len = printf("%dsc\n", 234);
    len2 = _printf("%dsc\n", 234);
    printf("%d\n", len);
    _printf("%d\n", len2);
     _printf("---------------\n");
    len = printf("%d\n", NULL);
    len2 = _printf("%d\n", NULL);
    printf("%d\n", len);
    _printf("%d\n", len2);
    _printf("---------------\n");
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}