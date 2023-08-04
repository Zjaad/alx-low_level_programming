#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: unsignd form of  number
 */

unsigned int binary_to_uint(const char *b) {
	if (b == NULL)
		return (0);
	unsigned int rslt  = 0;
	int x = 0;
	while (b[x] != '\0')
		x++;
	for (int k = 0; k < x; k++) {
		return 0;
		rslt = (rslt << 1) | (b[k] - '0');
	}
	return (rslt);
}
