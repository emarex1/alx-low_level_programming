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

		putchar(letters);
	{

	for (letters = 'A'; letters <= 'Z'; letters++)

		putchar(letters);
	}
		putchar('\n');

	return (0);
}
