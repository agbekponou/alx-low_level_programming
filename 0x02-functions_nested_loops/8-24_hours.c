#include "main.h"
/**
 * jack_bauer - function to print out time
 *
 * Return:void
 */
void jack_bauer(void)
{
int i, j, k, z;
for (i = 0; i <= 2; i++)
{
for (j = 0; j <= 9; j++)
{
if ((i <= 1 && j <= 9) || (i <= 2 && j <= 3))
{
for (k = 0; k <= 5; k++)
{
for (z = 0; z <= 9; z++)
{
_putchar(i + '0');
_putchar(j + '0');
_putchar(58);
_putchar(k + '0');
_putchar(z + '0');
_putchar('\n');
}
}
}
}
}

}
