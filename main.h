#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int print_char(int char_c);
int _printf(const char *format, ...);
void specifier(char c, va_list ap, int *count);
int print_string(char *str);
int binary(unsigned int n);
int print_number(int n);
#endif
