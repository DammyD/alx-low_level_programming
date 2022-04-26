#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: a pointer
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int b, sum1 = 0, sum2 = 0;
for (b = 0; b < size; b++)
{
sum1 += *(a + (size * b + b));
sum2 += *(a + (size * b + size - 1 - b));
}
printf("%d, ", sum1);
printf("%d\n", sum2);
}
