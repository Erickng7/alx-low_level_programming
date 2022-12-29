#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char var;

	while (count++ <= 9)
	{
		for (var = 'a'; var <= 'z'; var++)
			_putchar(var);
		_putchar('\n');
	}
}
