#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing number from 0-9 sperated by space and comma.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
	if (num == 9)
	{
	putchar(num + '0');
	break;
	}
	else
	{
	putchar(num + '0');
	putchar(',');
	putchar(' ');
	num++;
	}
	}
	return (0);
}



