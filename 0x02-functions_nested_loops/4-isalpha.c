#include "main.h"
#include <ctype.h>

/**
* _isalpha - return 1 or 0 depending on the output
* @c: the main parameter
*
* Description: checking for lower or uppercase alphabets
* Return: Always 0 (success)
*/

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
