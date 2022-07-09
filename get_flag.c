#include <stdio.h>
#include "main.h"

/**
 * get_flag - turns on flag if _printf finds a flag in the string
 * @s: character that hold flag specifier
 * @f: pointer the struct flags
 * Return: 1 if flag is truned on or 0 if otherwise
 */
int get_flag(char s, flags_t *f)
{
	int n;

	n = 0;

	switch (s)
	{
		case'#':
			f->hash = 1;
			break;

		case'+':
			f->plus = 1;
			break;

		case' ':
			f->space = 1;
			break;
	}
	return (n);
}
