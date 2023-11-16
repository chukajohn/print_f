#include "main.h"
/**
 *print_hex_xtra - prints in hexadecimal
 *@num: argument passed to the function
 *Return: hexadigit
 */
int print_hex_xtra(unsigned long int num)
{
	long int i; /*for looping */
	long int hexa_count = 0; /* to hold the hexa digits*/
	long int *arr;
	unsigned long int tmpo = num;


	while (num / 16 != 0)
	{
		num = num / 16;
		hexa_count++;
	}
	hexa_count++;
	arr = malloc(sizeof(long int) * hexa_count);

	for (i = 0; i < hexa_count; i++)
	{
		arr[i] = tmpo % 16;
		tmpo = tmpo / 16;

	}
	for (i = hexa_count - 1; i >= 0; i++)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (hexa_count);
}
