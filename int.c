#include "main.h"

/**
 *printf_int - prints interger
 *@args: argument to print
 *Return: number of characters printed
 */

int printf_int(va_list args)
{
	int a = va_arg(args, int);
	int num, last = a % 10, digit, exp = 1;
	int i = 1;

	a = a / 10;
	num = a;

	if (last < 0)
	{
		_putchar(',');
		num = -num;
		a = -a;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = a;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}


#include "main.h"

/**
 *print_dec - prints
 *@args: argument to print
 *Return: number of characters printed
 *
 *
 */

int print_dec(va_list args)
{
	int a = va_arg(args, int);
	int num = 0;
	int last = a % 10; 
	int digit, exp = 1;
	int i = 1;

	a = a / 10;
	num = a;

	if (last < 0)
	{
		_putchar(',');
		num = -num;
		a = -a;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp  * 10;
			num = num / 10;
		}
		num = a;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
			_putchar(last + '0');
			return (i);
}
