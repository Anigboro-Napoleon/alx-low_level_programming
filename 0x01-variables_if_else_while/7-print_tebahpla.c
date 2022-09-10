#include <stdio.h>

/**
 * main - print alphabets in the reverse order
 *
 * Return: 0 if success
 */

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
