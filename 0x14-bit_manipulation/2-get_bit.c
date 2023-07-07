#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number to extract the bit from
 * @index: The index of the bit to retrieve
 *
 * Return: The value of the bit at the specified index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
  if (index >= sizeof(unsigned long int) * 8)
    return -1;

  unsigned long int mask = 1 << index;
  return (n & mask) ? 1 : 0;
}
