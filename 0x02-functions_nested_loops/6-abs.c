#include "main.h"
/**
 * _abs - return the absolute of a value
 *  @c: varaile to be tested
 *
 *  Return: Absolute of the value
 */
int _abs(int c)
{
int value;
if (c > 0)
{
value = c;
}
else if (c <= 0)
{
value = c * -1;
}
return (value);
}
