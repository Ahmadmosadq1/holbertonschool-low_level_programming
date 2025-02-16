#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing all lowercase alphabet except for(q,e).
 * Return: Always 0 (Success)
 */

int main(void)
	{
	char alph = 'a';

	while (alph <= 'z')
	{
	if (alph == 'q' || alph == 'e')
	{
	alph++;
	continue;
	}
	else
	{
	putchar(alph);
	alph++;
	continue;
	}
	}
	putchar('\n');
	return (0);
}
