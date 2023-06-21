#include "main.h"

/**
 * print_alphabet - entry point
 * print alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char L = 'a';

	while (L <= 'z')
	{
		_putchar(L);
		L++;
	}
	_putchar('\n);
}
