#include <stdio.h>

/**
 * main - prints all the hexadicemel numbers in lowercase
 *
 * Return: return 0
*/

int main(void)
{
	int hex;

	for(hex = 48; hex < 58; hex++)
	{
		putchar(hex);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
