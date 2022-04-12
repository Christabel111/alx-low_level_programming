#include "main.h"

/**
 * main - Entry point
 * program that prints _putchar, followed by a new line
 * Return : 0 (success)
 */

int main(void)
{
	char s[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
