#include "main.h"
/**
 * print_last_digit - print last digit of a number
 *
 * @c: varaible to conesider
 *
 * Return: last digit
 */
int print_last_digit(int c)
{
int value;
if (c > 0)
{
value = c % 10;
}
else if (c <= 0)
{
value = (c * -1) % 10;
}
_putchar(value + '0');
return (value);
}
