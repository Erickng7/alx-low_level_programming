#include "main.h"

/**
* _isdigit - checks if c is a digit between 0 and 9
* @c: the first parameter
*
* Return: 1 if digit
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
