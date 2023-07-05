#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number or not
 * @n: Value to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (prime(n, n - 1));
}

/**
 * prime - check if the number is prime
 * @n: value to compute
 * @i: Iterator
 * Return: 1 if prime, 0 if not
 */
int prime(int n, int i)
{
if (i == 1)
{
return (1);
}
if (n % i == 0 && i > 0)
{
return (0);
}
return (prime(n, i - 1));
}
