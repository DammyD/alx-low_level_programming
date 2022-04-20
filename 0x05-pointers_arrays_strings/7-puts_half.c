#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: A string to be used
 * Return: void
 */
void puts_half(char *str)
{
int a, last;

a = 0;
while (str[a] != '\0')
{
a++
}

last = (a + 1) / 2;

for (a = last; str[a]; a++)
{
_putchar (str[a]);
}

_putchar ('\n');
}
