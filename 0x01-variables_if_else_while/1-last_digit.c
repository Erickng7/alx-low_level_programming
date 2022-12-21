#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - print the last digit of the number stored in the variable n
 *
 * Description: 'main'
 *
 * Return: 0 if (success)
 */

int main(void)
{
	int n;
	int lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastNum	= n % 10;
	if (lastNum == 0)
		printf("last digit of %d is %d and is 0\n", n, lastNum);
	else if (lastNum > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, lastNum);
	else if (lastNum <= 6 && !0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);

	return (0);
}
