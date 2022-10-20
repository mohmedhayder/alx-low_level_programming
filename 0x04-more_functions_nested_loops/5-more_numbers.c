#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14,
 * 10 times followed by a new line
*/

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;

		while (j <= 14)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
		i++;
	}
}
