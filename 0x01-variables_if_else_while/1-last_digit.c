#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the main function will determin
 * the if the last digit of n is greater than 5
 * the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0
 * the string and is less than 6 and not 0
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, last_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	return (0);
}

