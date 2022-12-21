#include <stdio.h>

/**
* main - printing all the letters of the alphabet in lowercase
*
* Return: Always 0 (sucess)
*/
int main(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
