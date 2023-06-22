#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase 
 *
 * Description: Prints the alphabet in lowercase,
 * excluding the letters 'q' and 'e', using the putchar function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}

	putchar('\n');

	return 0;
}
