#include "main.h"
#include <stdio.h>

/**
* print_i - print integer
* @num: input
*
* Return: nothing
*/
void print_i(int num)
{
	int i, rem, n = 0;
	int arr[50];

	if (num == 0)
		putchar('0' + 0);
	if (num < 0)
		putchar('-');
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
		putchar('0' + arr[i - 1]);
}
