#include "main.h"

int sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - suqre root
 * @n: integer parameter
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}

/**
 * sqrt_recursion - finds square root
 * @n: inyeger parameter
 * @i: integer parameter
 * Return: the square root
 */
int sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_recursion(n, i + 1));
}
