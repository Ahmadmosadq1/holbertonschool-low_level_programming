#include <stdio.h>
#include  <stdlib.h>
/**
 * main - Entry point
 *
 * Description :main function prints in complation file name.
 *.
 *@argc : the number of the arrgument.
 *
 * @argv : argument vector.
 *
 * Return: 0 (success).
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
