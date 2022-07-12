#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: A pointer
 * @s2: A pointer
 * Return: *dest
 */
int _strcmp(char *s1, char *s2)
{
int m;
int R;

m = 0;

while (s1[m] == s2[m] && (s1[m] != '\0' || s2[m] != '\0'))
{
m++;
}
R = s1[m] - s2[m];
return (R);
}
