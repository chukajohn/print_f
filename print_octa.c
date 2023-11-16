#include "main.h"
/**
 *print_octal - prints in octalbase
 *@val: argument passed to the function
 *Return: octa digit
 */
int print_octal(va_list val)
{
	int i; /*for looping */
	int oct_count = 0; /* to hold the octal digits*/
	unsigned int num;/*holds the number of value convertd*/
	int *arr;
	unsigned int tmpo = num;

	num = va_arg(val, unsigned int);

	while (num / 8 != 0)
	{
		num = num / 8;
		oct_count++;
	}
	oct_count++;
	arr = malloc(sizeof(int) * oct_count);

	for (i = 0; i < oct_count; i++)
	{
		arr[i] = tmpo % 8;
		tmpo = tmpo / 8;

	}
	for (i = oct_count - 1; i >= 0; i--)
		_putchar(arr[i] + '0');
	free(arr);
	return (oct_count);
}
