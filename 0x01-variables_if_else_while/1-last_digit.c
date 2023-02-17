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

	int last_digit

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;
	if (last_digit > 5)
		printf("and is greater than 5 %d", last_digit);
	else if (n == 0)
		printf(" and is 0 %d", last_digit);
	else
		printf(" and is less than 6 and not 0 %d", last_digit);

	/* This compare id n is positive, negative or equal to zero */
	return (0);
}
