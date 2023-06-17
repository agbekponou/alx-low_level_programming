#include <stdio.h>
/**
 * main - entry level
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char begin = 'a';
char end = 'z';
char alphabet = begin;
while (alphabet <= end)
{
putchar(alphabet);
alphabet++;
}
return (0);
}
