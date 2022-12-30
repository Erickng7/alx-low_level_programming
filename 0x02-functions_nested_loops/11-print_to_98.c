#include <stdio.h>
#include "main.h"

/**
* print_to_98 - printing all natural numbers upto 98;
* @n: first parameter to signify starting point
*
* Description: print all natural numbers form n too 98
* Return: Always 0
*/
void print_to_98(int n)
{
	int last;

	last = 98;

	if (n >= last)
	{
		while (n > last)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < last)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
