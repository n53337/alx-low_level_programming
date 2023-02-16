#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%ld Size of a char: \n", sizeof(char));	
	printf("%ld byte(s)\n", sizeof(int));	
	printf("%ld byte(s)\n", sizeof(long int));	
	printf("%ld byte(s)\n", sizeof(long long int));	
	printf("%ld byte(s)\n", sizeof(float));	
	return (0);
}
