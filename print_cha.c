#include "main.h"

/**
 *print_char - function that prints character
 *@val: argument
 *Return: 1 on success
 */

int print_char(va_list val)
{
	char str;

		str = va_arg(val, int);
	_putchar(str);
	return (1);
}
