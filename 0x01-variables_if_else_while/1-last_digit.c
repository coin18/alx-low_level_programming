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
	int last_digit;

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
				, n, last_digit);
	return (0);


	/* This compare id n is positive, negative or equal to zero */
	return (0);
}
