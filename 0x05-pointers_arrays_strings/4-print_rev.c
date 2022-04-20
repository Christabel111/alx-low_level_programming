#include "main.h"

/**
 * print_rev - prints reversed dtring, followed by a new line
 * @s: pointer to the string to prnt
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
