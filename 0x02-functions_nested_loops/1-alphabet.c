#include "main.h"

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0
*/

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}
	_putchar('\n');
}
