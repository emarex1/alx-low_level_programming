#include <stdio.h>

/**
* main - entry point of the programe
*
* the prints the alphabets in lower case
*
* Return: returns 0
*/

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)

	{
		if (letters == 'e' || letters == 'q')

			continue;

		putchar(letters);
	}
		putchar('\n');

	return (0);
}
