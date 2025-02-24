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

	for (count = 1; count <= 100; count++)
	{
		 if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		 else if (count % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		 else if (count % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}

	
		 else
		{
			printf("%d", count);
			printf(" ");
		}

}
printf("\n");
return (0);
}
