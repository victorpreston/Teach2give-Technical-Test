#include "main.h"

void fibonacci(int limit);

/**
 * Question 2: Fibonacci Sequence
 *
 * Write a program to generate the Fibonacci sequence up to 100.
 *
 */

void fibonacci(int limit)
{
	int t1 = 0, t2 = 1, nextTerm = t1 + t2;
	printf("%d\n%d\n", t1, t2);
	
	/**
	 * t1 : starts at 0
	 * t2 : starts at 1
	 * nextTerm : next number in the sequence.
	 */

	while (nextTerm <= limit)
	{
		printf("%d\n", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
}

int main()
{
	fibonacci(100);
	return 0;
}
