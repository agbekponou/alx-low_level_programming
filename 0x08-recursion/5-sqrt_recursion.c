#include "main.h"
/**
 * _sqrt_recursion - To print the square of a number
 * @n: Value to find the square for
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (square_root_helper(n, 0));
}

/**
 * square_root_helper - finds natural square root of a number
 * @n: number to calculate square on
 * @j: iterates through the number
 * Return: It returns the square of the number
 */
int square_root_helper(int n, int j)
{
if (j * j == n)
{
return (j);
}
if (j * j > n)
{
return (-1);
}
return (square_root_helper(n, j + 1));
}
