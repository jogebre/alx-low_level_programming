#include "main.h"
/**
 * print_alphabet_x10-prints alphabet ten times
 */
void print_alphabet_x10(void)
{
	int number;

	char letter;

	for (number = 1; number <= 10; number++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}
}
