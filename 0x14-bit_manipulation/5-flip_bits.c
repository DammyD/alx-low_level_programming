#include "main.h"
/**
 * flip_bits - returns the number of bits needed to get a number when flipped
 * @n: integer
 * @m: number to transform to
 * Return: the number of bits transformed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, nflip;

	nflip = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			nflip++;
	return (nflip);
}
