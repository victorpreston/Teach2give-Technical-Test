#include "main.h"

int reverse(int num);

/**
 * Question 5: Reverse Integer
 *
 * Write a program that takes an integer as input 
 * and returns an integer with reversed digit
 * ordering.
 *
 */

int reverse(int num)
{
	int rev = 0;
	
	/**
	 * rev * 10 : shift the digits of rev one place to the left.
	 * num % 10 : extract the last digit of num.
	 *
	 * When we add these two integers, we append the last digit
	 * of num to rev.
	 *
	 * num /= 10: Remove the last digit from num
	 */
	while (num != 0)
	{
		rev = rev * 10 + num % 10;
		num /= 10;
	}
	return rev;
}

int main()
{
	int exampleNum;
	
	printf("Enter a number: ");
	scanf("%d", &exampleNum);
	
	int reversed = reverse(exampleNum);
	printf("Reversed number: %d\n", reversed);
	
	return 0;
}
