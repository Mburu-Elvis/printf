#include "main.h"

/**
* binary - function that converts a number to binary
* @n: number to be converted
*
* Return: the number of characters printed
*/
int binary(unsigned int n)
{
	int count = 0;

	if (n / 2 == 2)
	{
		print_char(n % 2 + '0');
		count++;
	}
	if (n / 2)
	{
		count += binary(n / 2);
		print_char(n % 2 + '0');
		count++;
	}
	return (count);
}
