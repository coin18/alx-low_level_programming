#include<stdio.h>
#include<string.h>

/**
 * main - Entry point
 *
 * Description: 'prints out size of types on the computer it is compiled & run'
 *
 * Return: Always 0 (Success)
 *
 */

int main(void) /*main entry */
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);

}
