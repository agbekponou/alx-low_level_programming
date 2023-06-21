#include "main.h"
/**
 * _isalpha - Afunction to check for if alpha
 *
 * @c: character to be checked
 *
 * Return: 1 is a letter,lowercase or uppercase o otherwise
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}
