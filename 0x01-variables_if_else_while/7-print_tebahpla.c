#include <stdio.h>

/**
* main - prints the lowercase alphabet in reverse
*
* Return: 0 if successful
*/

int main(void)
{
	char var;

	for (var = 'z'; var >= 'a'; var--)

	{
		putchar(var);
	}
	putchar('\n');

	return (0);

}
