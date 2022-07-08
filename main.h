#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed _printf()
 * @plus: flag for the ' ' character
 * @hash: flag for the '#' character
 */
type struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: formate specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

/* _printf */
int _printf(const char *format, ...);

/* print_nums */
int print_int(va_list 1, flags_t *f);
void print_number(int n);
int print_unsigned(va_list 1, flags_t *f);
int count_digit(int i);

/* print_bases */
int print_hex(va_list 1, flags_t *f);
int print_hex_big(va_list 1, flags_t *f);
int print_binary(va_list 1, flags_t *f);
int print_octal(va_list 1, flags_t *f);
