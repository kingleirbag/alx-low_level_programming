#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;
	int integer;
	long longInteger;
	long long longLongInteger;
	float floatNumber;

	printf("Size of a char: %d byte(s)\n", sizeof(character));
	printf("Size of an int: %d byte(s)\n", sizeof(integer));
	printf("Size of a long int: %d byte(s)\n", sizeof(longInteger));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longLongInteger));
	printf("Size of a float: %d byte(s)\n", sizeof(floatNumber));

	return (0);
}
