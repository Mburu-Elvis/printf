#include "main.h"

/**
* print_n - print integers
* @num: input
*
* Return: nothing
*/
void print_n(int num)
{
	int i, rem, n = 0;
	int arr[50];

	if (num == 0)
		print_char('0' + 0);
	if (num < 0)
		print_char('-');
	for (i = 0; num != 0; i++)
	{
		if (num < 0)
			num *= -1;
		rem = num % 10;
		arr[i] = rem;
		num /= 10;
		n++;
	}
	for (i = n; i > 0; i--)
		print_char('0' + arr[i - 1]);
}

