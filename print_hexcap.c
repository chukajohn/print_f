#include "main.h"
/**
 *print_hexacap - prints in base 16 capital
 *@val: argument passed to the function
 *Return: octa digit
 */
int print_hexacap(va_list val)
{
	int i; /*for looping */
	int hexa_count = 0; /* to hold the hexa digits*/
	unsigned int num;/*holds the number of value convertd*/
	int *arr;
	unsigned int tmpo = num;

	num = va_arg(val, unsigned int);

	while (num / 16 != 0)
	{
		num = num / 16;
		hexa_count++;
	}
	hexa_count++;
	arr = malloc(sizeof(int) * hexa_count);

	for (i = 0; i < hexa_count; i++)
	{
		arr[i] = tmpo % 16;
		tmpo = tmpo / 16;

	}
	for (i = hexa_count - 1; i >= 0; i++)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 7;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (hexa_count);
}
