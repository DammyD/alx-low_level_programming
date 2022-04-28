#include "main.h"
/**
 * tmp_prime - is_prime_number
 * @i: integer
 * @n: number
 * Return: 1 if prime, 0 if not
 */
int tmp_prime(int i, int n)
{
if (n < 2 || n % i == 0)
return (0);
else if (i > n / 2)
return (1);
else
return (tmp_prime(i + 1, n));
}

/**
 * is_prime_number - if number is prime
 * @n: number
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (tmp_prime(2, n));
}

