#include "main.h"
/**
 *print_pointa - prints pointer
 *@val: argument
 *
 * Return: pointer
 */
int print_pointa(va_list val)
{
	int i;
	long int b, z;
	void *p; /*pointa that holds a pointa value to be printd*/
	char *str = "(nil)";

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
		return (i);
	}

	b = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	z = print_hex_xtra(b);
	return (z + 2);

}
