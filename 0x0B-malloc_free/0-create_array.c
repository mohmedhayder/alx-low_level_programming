#include "main.h"

/**
 * create_array - fuction that creats an array of chars,
 * and initializes with a speific char.
 * @size: the size of the array
 * @c: the char used to initialize the array
 * Return: NULL if size is zero or if it fails
 * else pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
