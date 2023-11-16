#include "main.h"
/**
 *print_hexacap_xtra - prints in base 16 capital
 *@num: argument passed to the function
 *Return:hexa digit
 */
int print_hexacap_xtra(unsigned int num)
{
	int i; /*for looping */
	int hexa_count = 0; /* to hold the hexa digits*/
	int *arr;
	unsigned int tmpo = num;

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
