#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: This function multiplies 2 numbers.
 *
 * @argc : the number of arguments.
 * @argv : the argument vector.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc !=  3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}


