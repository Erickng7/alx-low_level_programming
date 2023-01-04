#include "main.h"
#include <string.h>
/**
* _strncat - prints a concatenated string
* @dest: parameter to store concatenated string
* @src: source of the string
* @n: n bytes from src
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
