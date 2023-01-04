#include "main.h"
/**
* leet - print an encoded text
* @s: main parameter
*
* Return: encoded string
*/
char *leet(char *s)
{
	int i = 0, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	while (*(s + i))
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == s[i])
			{
				s[i] = b[j];
			}
			i++;
		}
		return (s);
	}
}
