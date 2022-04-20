#include "main.h"
/**
 * rev_string - prints a reverse string
 * @s: The string to be reversed
 * Return: Always 0
 */
void rev_string(char *s)
{
char *start_c, *end_c, c;
int i, j;
int length = 0;

for (i = 0; s[i]; i++)
{
length++;
}
j = length;

start_c = s;
end_c = s;

for (i = 0; i < j - 1; i++)
{
end_c++;
}

for (i = 0; i < j / 2; i++)
{
c = *end_c;
*end_c = *start_c;
*start_c = c;

start_c++;
end_c--;
}
}
