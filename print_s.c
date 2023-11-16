#include "main.h"
/**
 *print_s - prnts
 *@val: argumenr pased to the func
 *Return: pointer
 */
int print_s(va_list val)
{
	char *str; /*apointer that holds td string to be printd*/
	int i; /*for looping*/
	int len; /*hold d numba of char to b prntd*/
	int value; /*holds d */

	str = va_arg(val, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = str[i];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_hexacap_xtra(value);
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}
