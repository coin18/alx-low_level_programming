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
	printf(n);
	/* your code goes there */
	return (0);
}
