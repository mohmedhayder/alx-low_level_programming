#include <stdio.h>
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
		result = (ation(argv[1]) * ation(argv[2]));
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}