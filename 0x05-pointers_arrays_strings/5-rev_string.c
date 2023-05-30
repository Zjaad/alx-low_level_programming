#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counte = 0;
	int i;

	while (s[counte] != '\0')
	counte++;
	for (i = 0; i < counte; i++)
	{
		counte--;
		rev = s[i];
		s[i] = s[counte];
		s[counte] = rev;
	}
}
