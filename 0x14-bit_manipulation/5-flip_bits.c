#include "main.h"

/**
 * flip_bits - count number of bits need to be flipped
 *
 * @n: first number
 *
 * @m: second number
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count_int = 0;
	unsigned long int current;
	unsigned long int value = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = value >> x;
		if (current & 1)
			count_int++;
	}

	return (count_int);
}

