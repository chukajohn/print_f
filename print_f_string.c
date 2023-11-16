#include "main.h"

/**
 *print_f_string - function that prints strng
 *
 *@val: val argument
 *Return: 0 when sucessful
 */

int print_f_string(va_list val)
{
	int i;
	int length;
	char *str;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(nil)";
	length = _strlen(str);
	for (i = 0; i < length; i++)
		_putchar(str[i]);
	return (length);
	}
	else
	{
	length = _strlen(str);
	for (i = 0; i < length; i++)
		_putchar(str[i]);
	return (length);
	}
}
