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
value = c % 10;
if (value < 0)
{
value = value * -1;
}
_putchar(value + '0');
return (value);
}
