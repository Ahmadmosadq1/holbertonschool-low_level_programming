#include <stdio.h>
#include  <stdlib.h>
/**
 * main - Entry point
 *
 * Description :main function prints its passed arguments.
 *.
 *@argc : the number of the arrgument.
 *
 * @argv : argument vector.
 *
 * Return: 0 (success).
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
