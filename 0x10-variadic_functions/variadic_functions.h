#ifndef _VARIADIC_FUCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - struct type
 * @symbol: data type
 * @print: print function
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
