#include "main.h"
/**
* _strncpy - copies n bytes of source to dest
* @dest: sting to add to
* @src: string being copied
* @n: bytes to copy
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
