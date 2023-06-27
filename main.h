#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int print_char(int char_c);
int _printf(const char *format, ...);
void specifier(char c, va_list ap, int *count);
int print_string(char *str);
int binary(int n);
void print_i(int num);
void print_b(int dec);
#endif
