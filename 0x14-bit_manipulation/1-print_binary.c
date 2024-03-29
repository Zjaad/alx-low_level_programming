#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, numBits = 0;
	unsigned long int cr;

	for (i = 63; i >= 0; i--)
	{
		cr = n >> i;

		if (cr & 1)
		{
			_putchar('1');
			numBits++;
		}
		else if (numBits)
			_putchar('0');
	}

	if (!numBits)
		_putchar('0');
}
