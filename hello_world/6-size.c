#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: The script prints the sizes of the different data type.
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu", sizeof(char));
	printf(" byte(s)\n");
	printf("Size of an int: %1ld %s\n", sizeof(int), " byte(s)");
	printf("Size of a long int: %1lu %s\n", sizeof(long int), " byte(s)");
	printf("Size of a long long int: %lu %s\n", sizeof(long int), " byte(s)");
	printf("Size of a float: %1ld %s\n", sizeof(float), " byte(s)");
	return(0);
}
