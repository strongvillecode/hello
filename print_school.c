#include <stdio.h>

/**
 * print_school - prints "Holberton"
 *
 * Return: nothing.
 */
void print_school(void)
{
	char str[] = "Holberton";

	str[0] = 's';
	str[1] = 'a';
	str[2] = 'r';
	printf("%s/n", str);

	
}
/**
 * main - concept introduction
 *
 * Return: 0.
 */
int main(void)
{
	print_school();
	return (0);
}
