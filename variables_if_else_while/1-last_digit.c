#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This script gets the last digit of a (n).
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lasdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lasdig = n % 10;
	if (lasdig > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lasdig);
	}
	else if (lasdig == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lasdig);
	}
	else if (lasdig < 6 && lasdig != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lasdig);
	}
	return (0);
}
