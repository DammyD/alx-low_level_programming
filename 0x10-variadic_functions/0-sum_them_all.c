#include "variadic_function.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all parameters
 * @n: n args
 * Return: sum or if n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	sum;

	va_start(arguments, n);
	sum = 0;
	for (i = 0; i < n; i++)
	
		sum += va_arg(arguments, int);
	
	va_end(arguments);
return (sum);
}
