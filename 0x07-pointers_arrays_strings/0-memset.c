#include "main.h"
#include <string.h>

/**
* _memset-fill memory with constant byte
* @s:pointer to memory area
* @b:constan byte
* @n:size of byte
*
* return:pointe to s
*/
char *_memset(char *s, char b, unsigned int n)

{
	return (memset(s, b, n));
}
