#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a:  A pointer
 * @n: number
 * Return: void
 */
void reverse_array(int *a, int n)
{

int b;
int c;
int tmp;

b = 0;
c = n - 1;

while (b < c)
{
tmp = a[b];
a[b] = a[c];
a[c] = tmp;
b++;
c--;

}
}
