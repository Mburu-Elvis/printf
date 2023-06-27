#include "main.h"

/**
* printHex - function to print number in hex
* @num: number to print
*
* Return: the  number of characters printed
*/
int printHex(unsigned int num)
{
	int count = 0, rem;
	char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
					'A', 'B', 'C', 'D', 'E', 'F'};

	if (num / 16 == 0)
	{
		print_char(hex[num]);
		count++;
	}
	if (num / 16)
	{
		count = printHex(num / 16);
		rem = num % 16;
		print_char(hex[rem]);
		count++;
	}
	return (count++);
}

