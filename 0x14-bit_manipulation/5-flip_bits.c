#include "main.h"


/**
 * flip_bits - Returns the number of bits needed to flip to get from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  unsigned long int xo = n ^ m;
  unsigned int ct = 0;

  while (xo)
  {
    ct += xo & 1;
    xo >>= 1;
  }

  return ct;
}
