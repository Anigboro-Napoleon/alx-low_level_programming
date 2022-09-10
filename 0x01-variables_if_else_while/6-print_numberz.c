#include <stdio.h>

/**
 * main - prints all single digits starting from 0
 *
 * Return: 0 if success
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
