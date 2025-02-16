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

        while (alph <= 'z')
        {
                putchar(alph);
                alph++;
                if (alph > 'z')
                {
                        while(ALPH <= 'Z')
                        {
                                putchar(ALPH);
                                        ALPH++;
                        }
                }
                else{
                        continue;
                }
        }
	putchar('\n');
	return (0);
}
