#include "main.h"

/**
 * print_binary - Prints the binary representation of a number of 0 and 1.
 * @n: The number to be printed in binary(0 and 1).
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
