#include <stdio.h>
/**
 * main - Print numbers of base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 16; i++)
{
if (i < 10)
{
putchar(48 + i);
}
else
{
putchar(87 + i);
}
}
putchar('\n');
return (0);
}
