#include "main.h"

void fizzbuzz(int lowerLimit, int upperLimit);

/**
 * Question 1: FizzBuzz
 *
 * Write a program that prints the numbers from 1 to 100.
 * For multiples of 3, print "Fizz"; for multiples of 5, print "Buzz";
 * for numbers that are multiples of both 3 and 5, print "FizzBuzz".
 */

void fizzbuzz(int lowerLimit, int upperLimit)
{
	for (int i = lowerLimit; i <= upperLimit; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}
}

int main()
{
	fizzbuzz(1, 100);
	return 0;
}
