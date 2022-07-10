#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints string in reverse
 * @args: type struct va_arg where is allocated printf arguments
 * Return: string
 */
int print_rev(va_list args)
{
	char *str = va_arg(args, char*);
	int i;
	int j;

	if ( s == NULL)
	{
		return (NULL);
	}
	for (j = 0; s[j] != '\0'; j++)
		for (i = j - 1; i >= 0; i--)
			_putchar(s[i]);
	return (j);
}
