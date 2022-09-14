#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number of the sign.
 *
 * Return: 1 if the number > 0
 * :wq0 if the number = 0
 *	 -1 if the number < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}