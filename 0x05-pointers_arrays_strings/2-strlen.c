#include "main.h"
/**
 * _strlen - finds and outputs length of string
 * @s: point of string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
