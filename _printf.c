#include "main.h"

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list arg;

	va_start(arg, format);
	while (format != NULL && format[i] != '\0')
	{
		while (format[i] == '%')
		{
			i++;
			specifier(format[i], &arg, &count);
			i++;
		}
		print_char(format[i]);
		count++;
		i++;
	}
	va_end(arg);
	return (count);
}
