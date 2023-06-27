#include "main.h"
#include <unistd.h>

/**
 * print_char - function that prints a single character
 * @char_c: the character to print
 *
 * Return: the value it has written
 */
int print_char(int char_c)
{
	return (write(1, &char_c, 1));
}
