#include "main.h"

/**
 * _islower - checks whether or not a character is lowercase
 * Prototype: int _islower(int c); Returns 1 if c is lowercase Returns 0 otherwise
 * Return: 1 if it is lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}