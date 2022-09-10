#include <stdio.h>

/**
 * main - prints the alphabets except q and e
 *
 * Return: 0 if success
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
