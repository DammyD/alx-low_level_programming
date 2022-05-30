#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer
 * @index: index
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n |= (1 << index);
	return (1);
}
