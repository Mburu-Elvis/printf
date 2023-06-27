#include "main.h"

/**
* print_hex - function to print number in hex
* @num: number to print
*
* Return: the  number of characters printed
*/
int print_hex(unsigned int num)
{
	int count = 0, rem;
	char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
					'a', 'b', 'c', 'd', 'e', 'f'};

	if (num / 16 == 0)
	{
		print_char(hex[num]);
		count++;
	}
	if (num / 16)
	{
		count = print_hex(num / 16);
		rem = num % 16;
		print_char(hex[rem]);
		count++;
	}
	return (count++);
}

