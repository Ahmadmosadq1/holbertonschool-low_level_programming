#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing numbers from 0 to 9.
 * Return: Always 0 (Success)
 */

int main(void)
	{
	int num = 0;

	while (num <= 9)
	{
	printf("%d", num);
	num++;
	}
	printf("\n");
	return (0);
	}
