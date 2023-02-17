#include <stdlib.h>
#include <time.h>

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

	if (n > 0)
		printf("%d is positive\n", n)
	else if (n == 0)
		printf("%d is zero\n", n)
	else
		printf("%d is negative\n", n)

	/* This compare id n is positive, negative or equal to zero */
	return (0);
}
