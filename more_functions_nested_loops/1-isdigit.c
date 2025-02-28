#include "main.h"

/**
 * _isdigit - Entry point
 *
 * Description :checks if the num is digigt
 *@num : the parameters.
 * Return: zero.
 */

int _isdigit(int num)
{
	if (num >= 48 && num <= 57)
	{
		return (1);
	}
	return (0);
}

