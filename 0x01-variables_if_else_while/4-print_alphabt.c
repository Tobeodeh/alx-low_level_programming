#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,except e and q
 * followed by a new line
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char ch = 'a';

<<<<<<< HEAD
	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
=======
        while (ch <= 'z')
        {
                if (ch != 'e' && ch != 'q')
                {
                        putchar(ch);
                }
                ch++;
        }
        putchar('\n')                                                                                                                                                                                                                                                                                                                                       
>>>>>>> b1cb41c4ec3f075c2bada3a0e95c8093cb10dabc
}
