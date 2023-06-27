#include "main.h"

/**
* print_number - prints an integer
* @n: integer to be printed
*
* Return: number of digits printed
*/
int print_number(int n)
{
	int count = 0;

	if (n < 0)
	{
		print_char('-');
		n *= -1;
		count++;
	}
	if (n / 10 == 0)
	{
		print_char(n % 10 + '0');
		count++;
	}
	if (n / 10)
	{
		count += print_number(n / 10);
		print_char(n % 10 + '0');
		count++;
	}
	return (count);
}

