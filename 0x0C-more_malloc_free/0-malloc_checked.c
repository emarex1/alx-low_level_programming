#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: Pointer to the allocated memory.
 *         If malloc fails, terminates the process with status value 98.
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        printf("Error: malloc failed\n");
        exit(98);
    }

    return ptr;
}

