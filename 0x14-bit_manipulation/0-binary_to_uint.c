#include "main.h"
#include <string.h>
/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: a string to convert
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;
	unsigned int n = 1;
	unsigned int len;

	len = strlen(b);
	if (!b)
	return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			result += n;
		}
		n *= 2;
	}
	return (result);
}

