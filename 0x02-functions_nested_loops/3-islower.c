#include "main.h"

/**
 * _islower - check if a char is lowercase
 *
 * Return: 1 success otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
