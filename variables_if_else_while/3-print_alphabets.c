#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing the alphabet in small and then capital.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ALPH = 'A';
	char alph = 'a';

	while (ALPH <= 'Z' && alph <= 'z')
	{
		putchar(ALPH);
		putchar(alph);
		ALPH++;
		alph++;
	}
	putchar('\n');
	return (0);
}
