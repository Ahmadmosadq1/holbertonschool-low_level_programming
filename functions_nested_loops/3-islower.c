#include "main.h"
/**
*_islower - Entry point
* c_islower - function member
* description: this function takes input and saved in int "c" parameter
* @c: a parameter in the function
* Return: Always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
	return (0);
	}
return (0);
}
