#include "main.h"

/**
 * is_palindorme - returns tru if the given string is a palindorme
 * @s: string to check
 * Return: true if the given string is a palindorme
*/
int is_palindorme(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
	{
		return (1);
	}
	return (check_palindrome(s, len, index));
}

/**
 * find_strlen - Returns the length of a string
 * @s: the string to be measured
 * Return: the length of the string
*/
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - check if a string is a palindorme.
 * @s: the string to be checked.
 * @len: the length of s.
 * @index: The index of the string to be checked.
 * Return: 1 if the string is palindrome else 0
*/
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
	{
		return (1);
	}
	if (s[index] == s[len - index - 1])
	{
		return (check_palindrome(s, len, index + 1));
	}
	return (0);
}
