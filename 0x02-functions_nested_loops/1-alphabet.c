#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: prints lowercase alphabets with _putchar
 *
 * Return: void
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

