#include "main.h"

/**
* unsigned_int - function that prints an unsigned integer
* @n: unsigned integer to be printed
*
* Return: the number of characters displayed
*/
int unsigned_int(unsigned int n)
{
	int count = 0;

	if (n / 10 == 0)
	{
		print_char(n % 10 + '0');
		count++;
	}
	if (n / 10)
	{
		count += unsigned_int(n / 10);
		print_char(n % 10 + '0');
	}
	return (count);
}

