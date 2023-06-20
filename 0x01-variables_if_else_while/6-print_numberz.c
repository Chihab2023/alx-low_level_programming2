#include <stdio.h>

/**
 * main - print single digit
 *
 * Return: Always 0 (success)
 */

int main(void)
{
        int x = 0;

        while (x <= 9)
        {
                putchar(x + '0');
                x++;
        }
        putchar('\n);
        return (0);
}
