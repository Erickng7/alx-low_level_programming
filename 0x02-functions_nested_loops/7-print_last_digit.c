#include "main.h"

/**
* print_last_digit - printing all the last digits
* @n: the main parameter
*
* Description: Printing the last digits
* Return: Always 0 (success)
*/
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
