#include "main.h"

/**
 *print_r - function that prits str in reverse
 *@val: argument
 *
 *Return: the string
 */

int print_r(va_list val)
{
	int i;
	int k;
	char *str = va_arg(val, char*);

	if (str == NULL)
		str = "(null)";
	while (str[k] != '\0')
		k++;
	for (i = k - 1; i >= 0; i--)
		_putchar(str[i]);
	return (k);
}
