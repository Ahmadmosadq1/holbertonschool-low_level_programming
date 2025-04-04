#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * puts_half - Entry point
 *
 * Description :prints half of a string.
 *.
 *@str : the parameters.
 
 * Return: void.
 */

int main(int argc, char *argv[])
{
    int a, b;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    operation = get_op_func(argv[2]);

    if (!operation)
    {
        printf("Error\n");
        exit(99);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
    {
        printf("Error\n");
        exit(100);
    }

    printf("%d\n", operation(a, b));
    return (0);
}


