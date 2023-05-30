#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longe = 0;
	int m = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longe++;
	}
	m = longe - 1;
	for (o = 0 ; o <= m ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
