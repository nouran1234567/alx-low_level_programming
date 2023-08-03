#include "main.h"

/**
 * print_binary - prints decimal number as a binary
 *
 * @n: number to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int printed;

	for (x = 63; x >= 0; x--)
	{
		printed = n >> x;

		if (printed & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

