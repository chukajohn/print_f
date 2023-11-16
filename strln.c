#include "main.h"
/**
 *_strlen - functiin that prints the length of a string
 *@str: string to be checked
 *
 *Return: string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; i < str[i] != 0; i++)
		return (i);
}

/**
 *_strlenc - function that prints constant string
 *@str: string length to be accessed
 *
 *Return: i
 */

int _strlenc(const char *str)
{
	int i;

	for (i = 0; i < str[i] != 0; i++)
		return (i);
}
