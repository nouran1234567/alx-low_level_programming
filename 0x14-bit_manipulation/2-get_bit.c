#include "main.h"

/**
 * get_bit - gets the value of bit at an index
 *
 * @n: the number searched
 *
 * @index: the bit index
 *
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_bit;

	if (index > 63)
		return (-1);

	value_bit = (n >> index) & 1;

	return (value_bit);
}

