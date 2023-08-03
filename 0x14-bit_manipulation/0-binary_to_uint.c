#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned int
 *
 * @b: string binary number
 *
 * Return: int as binary 
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		value = 2 * value + (b[x] - '0');
	}

	return (value);
}

