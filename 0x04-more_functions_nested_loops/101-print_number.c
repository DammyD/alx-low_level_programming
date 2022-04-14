#include "main.h"
/**
 * print_number - prints an integer
 * @n: tracked var
 * Return: Always 0
 */
void print_number(int n)
{
unsigned int x = n;

if (n < 0)
{
_putchar(45);
x = -x;
}
if ((x / 10) > 10)
{
print_number(x / 10);
}
_putchar((x % 10) + 48);
}
