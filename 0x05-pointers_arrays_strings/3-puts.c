#include "main.h"

/**
 * _puts - prints string
 * @str: string to print
*/

void _puts(char *str)
{
	int i;

	for (i = 0; i < str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
