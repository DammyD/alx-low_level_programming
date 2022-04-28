#include "main.h"
/**
 * _sqrt - _sqrt_recursion
 * @n: sqrt
 * @i: integer params
 * Return: -1
 */
int _sqrt(int n, int i)
{
if (n < 0)
return (-1);
if ((i * i) > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: sqrt
 * Return: -1
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
