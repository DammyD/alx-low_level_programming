#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result size
 * Return: the addition of n1 and n2
 */
char *infinte_add(char *n1, char *n2, char *r, int size_r)
{

int add = 0, len1, len2, a, b;
for (len1 = 0; n1[len1]; len1++)
;
for (len2 = 0; n2[len2]; len2++)
;

if (len1 > size_r || len2 > size_r)
return (0);
len1--;
len2--;
size_r--;
	
for (a = 0; a < size_r; a++, len1--, len2--)
{

if (len1 >= 0)
add += n1[len1] - '0';
if (len2 >= 0)
add += n2[len2] - '0';

if (len1 < 0 && len2 < 0 && add == 0)
break;
r[a] = add % 10 + '0';
add /= 10;
}

r[a] = '\0';
if (len1 >= 0 || len2 >= 0 || add)
return (0);

for (a--, b = 0; a > b; a--, b++)
{
add = r[a];
r[a] = r[b];
r[b] = add;
}
return (r);
}
