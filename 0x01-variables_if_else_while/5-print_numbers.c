#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10
 *
 * Description: Prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		putchar(number + '0');

	putchar('\n');

	return 0;
}
