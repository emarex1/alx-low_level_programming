#include "main.h"

/**
 * print-diagonal - function that draws diagonal line on the terminal.
 * n - number of times the character \ should be printed
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
