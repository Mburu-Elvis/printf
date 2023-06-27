#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * specifier - function that handles the conversion specifiers
 * @c: conversion specifier character
 * @ap: pointer to the undefined arguments
 * @count: pointer to the number of characters printed
 *
 * Return: None
*/
void specifier(char c, va_list ap, int *count)
{
	int i, b, d;

	switch (c)
	{
		case 'c':
			print_char(va_arg(ap, int));
			*count += 1;
			break;
		case 's':
			*count += print_string(va_arg(ap, char *));
			break;
		case '%':
			print_char('%');
			*count += 1;
			break;
		case  'd':
			d = va_arg(ap, int);
			print_number(d);
			break;
		case 'i':
			i = va_arg(ap, int);
			print_number(i);
			break;
		case 'b':
			b = va_arg(ap, int);
			binary(b);
			break;
		default:
			print_char('%');
			print_char(c);
			*count += 2;
			break;
	}
}
