#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int reader;
    int writer;
    int file_to;
    int file_from;
    char buffer[1024];

    if (ac != 3)
    {
        dprintf(2, "Usage: %s cp file_from file_to\n", av[0]);
        exit(97);
    }
    if (av[1] == NULL)
	    return (-1);
    file_from = open(av[1], O_RDONLY);
    if (file_from == -1)
    {
	    dprintf(2, "Error: Can't read from file%s\n", av[1]);
	    exit(98);
    }
    file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | 0664);
    if (file_to == -1)
    {
	    dprintf(2, "Error: Can't write to %s\n", av[2]);
	    exit(99);
    }
    reader = read(file_from, buffer, 1024);/*intilzing reader*/
    while (reader > 0)
    {
	    writer = write(file_to, buffer, reader);
	    if (writer == -1 || writer != reader)
	    {
		    dprintf(2, "Error: Can't write to %s\n", av[2]);
		    close(file_to);
		    close(file_from);
		    exit(99);
	    }
	    reader = read(file_from, buffer, 1024);
    }
    if (reader == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		close(file_from);
		close(file_to);
		exit(98);
	}
    if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
