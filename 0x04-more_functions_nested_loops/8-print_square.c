#include "main.h"
/**
 * print_sqaure -prints a square
 * @size - size of square
 * Returns: none
 */
void print_square(int size)
{
	int l, c;

	if (size <= 0)
		_putchar('\n');
	for (l = 0; l < size; c++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
