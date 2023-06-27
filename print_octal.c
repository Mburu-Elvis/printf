#include "main.h"

/**
* print_octal - function to print octal
* @num: number to print
*
* Return: number of characters printed
*/
int print_octal(unsigned int num)
{
	int count = 0;

	if (num / 8 == 0)
	{
		print_char(num % 8 + '0');
		count++;
	}
	if (num / 8)
	{
		count += print_octal(num / 8);
		print_char(num % 8 + '0');
		count++;
	}
	return (0);
}

