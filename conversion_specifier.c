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
void specifier(char c, va_list *ap, int *count)
{
	switch (c)
	{
		case 'c':
			*count += 1;
			print_char(va_arg(*ap, int));
			break;
		case 's':
			*count += print_string(va_arg(*ap, char *));
			break;
		case '%':
			print_char('%');
			*count += 1;
			break;
		case '\0':
		case ' ':
			break;
		default:
			print_char('%');
			print_char(c);
			count += 2;
			break;
	}
}
