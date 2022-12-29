#include "main.h"

/**
*print_alphabet - print all alphabets in lowercase
*/

void print_alphabet(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{	
		_putchar(var);
	}	

	_putchar('\n');
}
