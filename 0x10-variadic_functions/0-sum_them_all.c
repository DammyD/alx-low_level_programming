#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its paramters.
 * @n: n args
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{

va_list arguments;
unsigned int i, sum = 0;

va_start(arguments, n);

for (i = 0; i < n; i++)

sum += va_arg(arguments, int);

va_end(arguments);

return (sum);
}
