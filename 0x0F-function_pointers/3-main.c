#include <stdio.h>
#include <stdlib.h>
#include 3-calc.h

/**
 * main - Entry point
 *
 * @argc: length of command line arguments
 *
 * @argv: double pointer to cli arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int (*func_ptr)(int, int);

if (argc != 4)
{
printf(Errorn);
exit(98);
}

if (argv[2][1] != '\0')
{
printf(Errorn);
exit(99);
}

func_ptr = get_op_func(argv[2]);

if (func_ptr == NULL)
{
printf(Errorn);
exit(99);
}

printf(%dn, func_ptr(atoi(argv[1]), atoi(argv[3])));

return (0);
}
