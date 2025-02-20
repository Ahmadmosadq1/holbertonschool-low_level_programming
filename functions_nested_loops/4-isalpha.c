#include "main.h"
/**
 * main - Entry point
 * 
 * Description: 'the programe checks if c is a letter or not
 * @parameter: c
 * 
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
