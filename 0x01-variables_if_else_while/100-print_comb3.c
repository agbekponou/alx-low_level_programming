#include <stdio.h>
/**
 * main - print 2 combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 48; i < 58; i++)
{
for (j = i + 1; j < 58; j++)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(44);
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
