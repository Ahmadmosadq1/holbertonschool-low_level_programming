#include <unistd.h>
#include "main.h"
/*
 * main - Entry point
 *
 * Description: creating a void function that print_alphapbet.
function print_alphabet
 
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
}

