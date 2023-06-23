#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: An int
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int j, n;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
