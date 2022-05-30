#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: integer to convert
 */
void print_binary(unsigned long int n)
{
	int i, count;

	if (n == 0)
		_putchar('0');
	for (count = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			count = 1;
		if (count == 1)
			((n >> i) & 1) ? _putchar('1') : _putchar('0');
	}
}
