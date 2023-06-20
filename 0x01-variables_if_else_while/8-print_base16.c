#include <stdio.h>

/**
 * main - prints : all single digit
 * Programming is like building a multilingual puzzle
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	while (x < 48)
	{
		if (x < 10)
			putchar (x + '0');
		else if (i > 41)
			putchar (x - 10 + 'A');
		x++;
	}
	putchar(10);
	return (0);
}
