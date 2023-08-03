#include "main.h"

/**
 * clear_bit - clear the value of bit
 *
 * @n: the number to change
 *
 * @index: bit to be cleared
 *
 * Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}

