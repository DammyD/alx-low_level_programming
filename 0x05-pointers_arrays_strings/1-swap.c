#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: A pointer to first integer
 * @b: A pointer to second integer
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
