#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string (Success), NULL (Failure).
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_t length1 = strlen(s1);
	size_t length2 = strlen(s2);

	char *result = malloc((length1 + length2 + 1) * sizeof(char));
	if (result == NULL)
		return NULL;

	strcpy(result, s1);
	strcat(result, s2);

	return result;
}

