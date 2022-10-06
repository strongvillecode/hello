#include <stdio.h>
#include <stdlib.h>

/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 */
int main(void)
{ 
	char *str;

	str = malloc(sizeof(char) * 3);
	str[0] = '0';
	str[1] = 'k';
	str[2] = '\0';
	printf("%s\n", str);
	return (0);
}
