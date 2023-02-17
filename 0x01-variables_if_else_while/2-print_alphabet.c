#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Outputs alphabet in lower case
 *
 * Return: always (0)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
