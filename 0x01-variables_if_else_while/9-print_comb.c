#include <stdio.h>
/**
 * main - Printing combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
if (i < 57)
{
putchar(i);
putchar(44);
putchar(' ');
}
else
{
putchar(i);
}
}
return (0);
}
