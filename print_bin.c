#include "main.h"

/**
 *print_binary - converts unsigned int to binary
 *@val: argument
 *Return: interger
 */

int print_binary(va_list val)
{
	int zero = 0; /*krpp track of non zero variable flag*/
	int count = 0; /* keep track of nmber count*/
	int i, a = 1, b; /* 'a' for a bit max for individual variable*/
	unsigned int num; /*it is an unsigned int cos we converting to binary*/
	unsigned int p; /*to store d result of bitwise operator*/
		num = va_arg(val, unsigned int);

		for (i = 0; i < 32; i++) /* it iterate for 32x cos 32 = 32bit unsig int*/
		{
			p = ((a << (32 - i)) & num);
			if (p >> (31 - i))
				zero = 1;
			if (zero)
			{
				b = p >> (31 - i);
				_putchar(p + 0);
				count++;
			}
		}
		if (count == 0)
		{
			count++;
			_putchar('0');
		}
		return (count);
}
