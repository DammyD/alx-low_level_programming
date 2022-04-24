#include "main.h"
/**
 * leet = encodes a string
 * @s: A pointer
 * Return: *s
 */
char *leet(char *s)
{

int a;
int b;
char l[] = "ol_ea__t";

for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; l[b] != '\0'; b++)
{
if (s[a] == l[b] || s[a] == (l[b] - 32))
{
s[a] = b + '0';
}
}
}
return (s);
}
