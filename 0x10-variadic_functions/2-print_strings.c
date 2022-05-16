#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed
 * @n: n args
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int s;
	char *str;

	va_start(arguments, n);

	for (s = 0; s < n; s++)
	{
		str = va_arg(arguments, char*);
		if (str != NULL)
			printf("%s", str);
		else
			printf("%p", str);
		if (separator != NULL && s < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}

