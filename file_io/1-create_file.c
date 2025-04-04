#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * print_numbers - Entry point
 *
 * Description :prints number from 0 to 9 using _putchar
 *.
 * Return: void.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	
	if (filename == NULL)
		return (0);
	
	fd = open(filename, 

