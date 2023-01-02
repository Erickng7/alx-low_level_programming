#include "main.h"

/**
* _isupper - checks if letters are uppercase or lowercase
* @c: the main parameter
*
* Return: 1 if uppercase
*/
int isupper(int c)
{
	if ((c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
