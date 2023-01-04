#include "main.h"
/**
* string_toupper - connvert lowercase to upper
* @s: the string to convert
*
* Return: uppercase
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
