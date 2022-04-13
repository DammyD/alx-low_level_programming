#include <stdio.h>
/**
 * main - Prints the sum of Fibonacci sequence under 4,000,000.
 *
 * Return: Always 0
 */
int main(void)
{
long int fib1 = 1, fib2 = 2, sum = fib2, tmp;

while (fib2 < 4000000)
{
tmp = fib1 + fib2;
fib1 = fib2;
fib2 = tmp;
sum += (fib2 % 2 == 0) ? fib2 : 0;
}
printf("%li\n", sum);

return (0);
}
