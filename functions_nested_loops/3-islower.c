#include "main.h"
/**
* _islower(int c) - Entry point
*
* Description: This function checks if the letter is capital or small
* Return: Always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z' )
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
	return (0);
	}
return (0);
}
