#include <stdlib.h>
#includ <stdio.h>

/**
 * main - Entry point
 *
 * Outputs alphabet in lower case
 *
 * Return: always (0)
 */

int main(void) 
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
		putchar('\n');

	return (0);
}
