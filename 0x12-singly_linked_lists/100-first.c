#include <stdio.h>
#include "lists.h"

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - function that run before the main function
 *
 * function is executed
 *
 * Return: void
 */
void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

