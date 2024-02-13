#include "main.h"

bool isPowerOfTwo(int n);

/**
 * Question 3: Power of Two
 *
 * Write a program that takes an integer as input and 
 * returns true if the input is a power of two.
 *
 */

bool isPowerOfTwo(int n)
{
	if (n == 0)
	{
		return false;
	}
	
	while (n != 1)
	{
		if (n % 2 != 0)
		{
			return false;
		}
		n = n / 2;
	}
	return true;
}

int main()
{
	int exampleNum;

	printf("Enter a number: ");
	scanf("%d", &exampleNum);

	if (isPowerOfTwo(exampleNum))
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	return 0;
}
