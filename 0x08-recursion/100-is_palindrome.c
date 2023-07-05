#include "main.h"
/**
 * is_palindrome_recursive - A function
 * @s: String that s given
 * @start: Beging of strin
 * @end: ending of string
 * Return: Always 0
 */
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 * is_palindrome - check if the word is a palindrome or not
 * @s: Charater to check
 * Return: Always 0
 */
int is_palindrome(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return (is_palindrome_recursive(s, 0, length - 1));
}
