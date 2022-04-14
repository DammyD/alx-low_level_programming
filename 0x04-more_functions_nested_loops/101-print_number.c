#include "main.h"
/**
 * print_number - that prints an integer
 * @n: print int
 * Return: Always 0
 */
void print_number(int n)
{
unsigned int n;
n = 0;

if (n < 0)
{
n = -n
_putchar('-');

}
else
{
n = n;
}
if (n / 10)
{
print_number(n / 10);
}
_putchar((n % 10) + '0');
}
