#include "main.h"
/**
 * times_table - 9 times table
 *
 * Return:void
 */
void times_table(void)
{
int  k, m, z, u, d;
for (k = 0; k <= 9; k++)
{
for (m = 0; m <= 9; m++)
{
z = k * m;
if (z > 9)
{
u = z % 10;
d = (z - u) / 10;
_putchar(44);
_putchar(32);
_putchar(32);
_putchar(d + '0');
_putchar(u + '0');
}
else
{
if (m != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}

_putchar(z + '0');
}
}
_putchar('\n');
}
}
