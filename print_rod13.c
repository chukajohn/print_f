#include "main.h"

/**
* print_rot13 -  a function that encodes a string using rot13.
*@val: string to br encoded
* Return: always 0
*/

int print_rot13(va_list val)
{
	int i, count = 0;
	int j, k;
	char *s = va_arg(val, char *);
	char a[]  = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[]  = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);

}
