#include "main.h"

/**
* print_hex - function to print number in hex
* @num: number to print
*
* Return: the  number of characters printed
*/
int print_hex(int num)
{
	int count = 0, rem;
	unsigned int int_u;
	char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
					'a', 'b', 'c', 'd', 'e', 'f'};

	int_u = (unsigned int)num;

	if (int_u / 16 == 0)
	{
		print_char(hex[int_u]);
		count++;
	}
	if (int_u / 16)
	{
		count = print_hex(int_u / 16);
		rem = int_u % 16;
		print_char(hex[rem]);
		count++;
	}
	return (count++);
}

