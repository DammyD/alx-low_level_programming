#include "main.h"
/**
 * leet = encodes a string
 * @s: A pointer
 * Return: *s
 */
char *leet(char *s)
{

int a = 0, b = 0;
char array_leet[] = {'4', '3', '0', '7', '1'};
char array_up[] = {'A', 'E', 'O', 'T', 'L'};
char array_low[] = {'a', 'e', 'o', 't', 'l'};

while (s[a] != '\0')
{
for (b = 0; b < 5; b++)
{
if (s[a] == array_low[b] || s[a] == array_up[b])
s[a] = array_leet[b];
}
a++;
}
return (s);
}
