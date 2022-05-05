#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *argstostr - description
 * @ac: int
 * @av: arguments
 * Return: pointer to new buffer with all arguments as 1 string.
 */

char *argstostr(int ac, char **av)
{	
	char *str;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];

		str[index++] = '\n';
	}
	str[size] = '\0';

	return (str);
}
	
