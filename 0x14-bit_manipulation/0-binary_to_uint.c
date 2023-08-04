#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: unsignd form of  number
 */

unsigned int binary_to_uint(const char *b) {
       	unsigned int rslt = 0;
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return 0;
		rslt = rslt * 2 + (*b - '0');
		b++;
	}
	return (res);
}
