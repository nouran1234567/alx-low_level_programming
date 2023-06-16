#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		Printf("%i is positive\n", n);
	else if (n == 0)
		Printf("%i is zero\n", n);
	else
		Printf("%i is negative\n", n);
	return (0);
}
