#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints all single digit numbers of base 10
 *
 * Return: 0
 */
int main(void)
{
	int s = 0;

	while (s < 10)
	{
		putchar(48 + s);
		if (s != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
