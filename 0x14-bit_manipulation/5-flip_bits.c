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
  unsigned long int xorres = n ^ m;
  unsigned int cnt = 0;

  while (xorres)
  {
    cnt += xorres & 1;
    xorres >>= 1;
  }

  return cnt;
}
