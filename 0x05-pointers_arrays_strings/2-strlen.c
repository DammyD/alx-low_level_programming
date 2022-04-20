#include "main.h"
/**
 * _strlen - length of a string
 * @s: The string to calculate it's length
 * Return: Always 0
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

