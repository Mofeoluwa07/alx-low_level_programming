#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: program that prints all possible
 * combinations of single-digit n
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
