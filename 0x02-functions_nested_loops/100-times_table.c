#include "main.h"

/**
* print_times_table - printing n times table starting with 0
* @n: the number of times to print the table
*
* Description: printing n times table
*/
void print_times_table(int n)
{
	int i, j, product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				product = i * j;
				if (product <= 99)
				{
					_putchar(' ');
				}
				if (product <= 9)
				{
					_putchar(' ');
				}
				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10)) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + 48);
				}
				_putchar((product % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
