#include <stdio.h>
#include <ctype.h>
/**
 *main - Program to print all alphabets except q and e
 *
 *Return: return 0
*/
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
