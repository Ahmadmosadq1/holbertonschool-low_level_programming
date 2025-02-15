#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This script prints weather n is (-) or (+) using if statment.
 * Return: Always 0 (Success)
 */
int main(void)
{	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)/* print positive if n bigger than 0 */
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)/*print zero if n=0*/
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)/*prints negative if n less than 0*/
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
