#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at agiven index
 * @n: integer
 * @index: index
 * Return: 1 on success, or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
