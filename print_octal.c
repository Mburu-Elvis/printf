#include "main.h"

/**
* print_octal - function to print octal
* @num: number to print
*
* Return: number of characters printed
*/
int print_octal(int num)
{
	int count = 0;
	unsigned int num_conv = (unsigned int)num;

	if (num_conv / 8 == 0)
	{
		print_char(num_conv % 8 + '0');
		count++;
	}
	if (num_conv / 8)
	{
		count += print_octal(num_conv / 8);
		print_char(num_conv % 8 + '0');
		count++;
	}
return (0);
}

