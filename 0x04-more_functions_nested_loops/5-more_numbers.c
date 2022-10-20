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
			char c;

			_putchar(j + '0');
			if (j > 9)
			{
				_putchar('1');
				c = j % 10;
			}
			_putchar('0' + c);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
