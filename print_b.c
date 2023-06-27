#include "main.h"

/**
* print_b - print binary
* @dec: input
*
* Return: nothing
*/
void print_b(int dec)
{
	int i, rem, n = 0;
	int arr[50];

	if (dec < 0)
		return;
	if (dec == 0)
		print_char('0' + 0);
	for (i = 0; dec > 0; i++)
	{
		rem = dec % 2;
		arr[i] = rem;
		dec /= 2;
		n++;
	}
	for (i = n; i > 0; i--)
		print_char('0' + arr[i - 1]);
}
