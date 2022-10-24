#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns length
*/

int _strlen(char *s)
{
	int count, inc;

	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
	{
		inc++;
	}
	return (inc);
}

/**
 * swap_char - swap two character
 * @a: first charcter
 * @b: second charcter
*/
void swap_char(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * rev_string - Reverse a string
 * @s: String to reverse
*/

void rev_string(char *s)
{
	int i = 0, length;

	length = _strlen(s) - 1;
	while (length > i)
	{
		swap_char(s + length, s + i);
		i++;
		length--;
	}
}
