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

	if (n > 5)
		printf("%d and is greater than 5 \n", n);
	else if (n == 0)
		printf("%d and is 0 \n", n);
	else
		(n < 6 && n != 0);
		printf("%d and is less than 6 and not 0 \n", n);

	/* This compare id n is positive, negative or equal to zero */
	return (0);
}
