#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Print prints the number stored in the source code
 *
 * Return: always (0)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
		printf("and is greater than 5 %d", n % 10);
	else if (n % 10 == 0)
		printf(" and is 0 %d", n % 10);
	else
	printf(" and is less than 6 and not 0 %d", n % 10);

	/* This compare id n is positive, negative or equal to zero */
	return (0);
}
