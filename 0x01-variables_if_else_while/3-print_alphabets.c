#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the alphabets in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	int up;

	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up);
	}
	putchar('\n');
	return (0);
}

