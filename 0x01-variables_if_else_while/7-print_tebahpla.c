#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all alphabets from z to a
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
