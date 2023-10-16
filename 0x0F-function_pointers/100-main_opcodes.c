#include <stdlib.h>
#include <stdio.h>
 
/**
 * main -checks code & prints opcodes
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 (Successful program)
 */
int main(int argc, char *argv[])
{
        int j, i;
        char *pt;

        if (argc != 2)
        {
                printf("Error\n");
                return (1);
        }

        i = atoi(argv[1]);

        if (i < 0)
        {
                printf("Error\n");
                return (2);
        }

        pt = (char *)main;

        for (j= 0; j < i; j++)
        {
                if (j == i - 1)
                {
                        printf("%02hhx\n", pt[j]);
                        break;
                }
                printf("%02hhx ", pt[j]);
        }
        return (0);
}

