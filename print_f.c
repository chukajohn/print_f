#include "main.h"
/*_printf - acts like printf
 *@format: pointer
 *Return: 
 *
 */
int _printf(const char *format, ...)
{
	rythm n[] = {
		{"%c", print_char}, {"%s", print_f_string}, {"%%", print_37}, {"%d", print_dec}, {"%i", printf_int}, {"%b", print_binary}, {"%u", printf_unsigned_int}, {"%x", print_hexa}, {"%X", print_hexacap}, {"%S", print_s}, {"%r", print_r}, {"%0", print_octal}, {"%R", print_rot13}, {"%p",  print_pointa},
	};

	va_list args;
	int k, i = 0, lent = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] == '\0')
	{
		k = 13;
		while (k >= 0)
		{
			if (n[k].bet[0] == format[i] && n[k].bet[1] == format [i + 1])
			{
				lent = lent + n[k].f(args);
				i = i + 2;
				goto Here;
			}
			k--;
		}
		_putchar(format[i]);
		i++;
		lent++;
	}
	va_end(args);
	return (lent);
}
