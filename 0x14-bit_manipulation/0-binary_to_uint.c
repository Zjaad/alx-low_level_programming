#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the unsignd form of  number
 */


unsigned int binary_to_uint(const char *b)
{
  unsigned int res = 0;

  if (b == NULL)
    return 0;

  while (*b)
  {
    if (*b != '0' && *b != '1')
      return 0;

    res = res * 2 + (*b - '0');
    b++;
  }

  return res;
}
