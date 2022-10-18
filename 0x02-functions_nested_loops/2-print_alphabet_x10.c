#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets in lowercase
 * Return: return NONE
*/

void print_alphabet_x10(void)
{
	int letter;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
	return;
}
