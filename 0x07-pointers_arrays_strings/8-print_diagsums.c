#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -> function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to an array of integers
 * @size: integer
 */
void print_diagsums(int *a, int size)
{
	int c = 0;
	int b = 0;
	int i = 0;

	while (i < size)
	{
		c += a[i * size + i];
		b += a[(i + 1) * (size - 1)];
		i++;
	}
	printf("%d, %d\n", c, b);

}
