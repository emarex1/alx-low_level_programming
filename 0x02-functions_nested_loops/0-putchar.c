#include "main.h"
/**
 * main - Print "_putchar"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char name_of_text[] = "_putchar";

	while (i < 8)
	{
		_putchar(name_of_text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
