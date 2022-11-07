#include "main.h"
/**
 * _strdup - function returns a pointer to a newlly allocated space
 * @str: the string to dublicate
 * Return: returns NULL if str = NULL
 * or pointer to dublecated string
 * or NULL if insufficient memory
*/

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[index]; index++)
	{
		len++;
		cpy = malloc(sizeof(char) * (len + 1));
	}
	if (cpy == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}
	cpy[len] = '\0';
	return (cpy);
}

int main(void)
{
	char res;
	res = _strdup('hello');
	return (0);
}
