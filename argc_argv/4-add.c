#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: This function adds positive numbers.
 *
 * @argc : the number of arguments.
 * @argv : the argument vector.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	char *a;
	unsigned int index;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		a = argv[i];
		for (index = 0; index <  strlen(a); index++)
		{
			if (!isdigit(a[index]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (result);
}
