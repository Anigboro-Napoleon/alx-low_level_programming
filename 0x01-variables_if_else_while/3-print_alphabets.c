#include <stdio.h>

/**
 * main - prints letters alphabetically in both lowercase and uppercase
 *
 * Return: 0 if successful
 */

int main(void)
{
	char lowerCase = 'a';
	char upperCase = 'A';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}
	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}
	putchar('\n');
	return (0);
}
