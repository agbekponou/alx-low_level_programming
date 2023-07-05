#include "main.h"
/**
 * _strlen_recursion - returns the len of a string
 * @s: Character to be passed
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
int value = 0;
if (*s)
{
value++;
value += _strlen_recursion(s + 1);
}
return (value);
}
