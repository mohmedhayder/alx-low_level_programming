#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the program name
 * @argc: number of args
 * @argv: array of args
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int result = 1;

	if (argc == 3)
	{
		result = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
