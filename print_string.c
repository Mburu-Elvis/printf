#include "main.h"

/**
 * print_string - function to print a string
 * @str: string to print
 *
 * Return: the number of characters printed
*/
int print_string(char *str)
{
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		print_char(str[i]);
		i++;
	}
	return (i);
}
