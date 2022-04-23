#include <stdio.h>
/**
 * Instructions:
 * You are not allowed to use the var a
 * You are not allowed to modify the var p
 * You can only write one statement
 * You are not allowed to code anything else but the line of code
 * Return: Always 0
 */
int main(void)
{

int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
*(p + 5) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
