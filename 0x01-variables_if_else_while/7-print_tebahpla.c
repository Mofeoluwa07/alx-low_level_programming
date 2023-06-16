#include <stdio.h>

/**
 * main - main block
 * Description: prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}

	putchar('\n');
	return (0);
}
