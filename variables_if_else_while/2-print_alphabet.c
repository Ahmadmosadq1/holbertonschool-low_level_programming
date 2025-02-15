#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: printing the small alphabet using fun putchar().
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
	putchar(alph);
	alph++;
	}
	putchar('\n');
	return (0);
}
