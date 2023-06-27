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
		case 'd':
		case 'i':
			*count += print_number(va_arg(ap, int));
			break;
		case 'b':
			*count += binary(va_arg(ap, int));
			break;
		case 'u':
			*count += unsigned_int(va_arg(ap, unsigned int));
			break;
		case 'o':
			*count += print_octal(va_arg(ap, int));
			break;
		case 'x':
			*count += print_hex(va_arg(ap, int));
			break;
		case 'X':
			*count += printHex(va_arg(ap, int));
			break;
		default:
			print_char('%');
			print_char(c);
			*count += 2;
			break;
	}
}
