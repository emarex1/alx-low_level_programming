#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string (Success), NULL (Failure).
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return NULL;

	size_t length = strlen(str);
	char *duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return NULL;

	strcpy(duplicate, str);

	return duplicate;
}

