#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - copies content of one file to another
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success, exits on error
 */
int main(int ac, char **av)
{
    int f_from, f_to, r;
    char buf[1024];

    if (ac != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    f_from = open(av[1], O_RDONLY);
    if (f_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
        exit(98);
    }

    f_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (f_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
        close(f_from);
        exit(99);
    }

    while (1)
    {
        r = read(f_from, buf, 1024);
        if (r == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
            close(f_from);
            close(f_to);
            exit(98);
        }
        if (r == 0)
            break;
        
        if (write(f_to, buf, r) != r)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
            close(f_from);
            close(f_to);
            exit(99);
        }
    }

    if (close(f_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
        exit(100);
    }

    if (close(f_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
        exit(100);
    }

    return (0);
}
