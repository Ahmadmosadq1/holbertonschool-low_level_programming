#include "main.h"

/**
 * print_chessboard - Entry point
 *
 * Description :prints the chassboard array
 *.
 *@a : the array.
 * Return: void.
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[j][i]);
		}
		_putchar('\n');
	}
}
