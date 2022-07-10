#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints string in reverse
 * @l: argument from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: string
 */
int print_rev(va_list l, flags_t *f)
{
	char *str = va_arg(l, char*);
	int i;
	int j;

	(void)f;
	if ( str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
		for (i = j - 1; i >= 0; i--)
			_putchar(str[i]);
	return (j);
}
