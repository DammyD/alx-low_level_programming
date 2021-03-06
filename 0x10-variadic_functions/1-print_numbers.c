#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - prints numbers, followed by a new line.
* @separator: the string to be printed
* @n: n args
* Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;

	va_start(arguments, n);
	if (n != 0)
	{
		for (i = 0; (i < n - 1); i++)
		{
			if (separator != NULL)
			{
				printf("%d%s", va_arg(arguments, int), separator);
			}
			else
			{
				printf("%d", va_arg(arguments, int));
			}
		}
		printf("%d", va_arg(arguments, int));
		va_end(arguments);
	}
	printf("\n");
}
