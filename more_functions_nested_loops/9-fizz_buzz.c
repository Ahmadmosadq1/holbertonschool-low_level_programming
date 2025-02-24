#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description :printing numbers from (0-100) for fuzz buzz game
 *.
 *@void
 *
 * Return: void.
 */
int main(void)
{
	int count;

	for (count = 1; count < 101; count++)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (count == 100)
		{
			printf("%d",count);
		}
		else 
		{
			printf("%d ", count);
		}
}
return (0);
}
