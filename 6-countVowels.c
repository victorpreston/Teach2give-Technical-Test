#include "main.h"

int countVowels(char* str);

/**
 * Question 6: Count Vowels
 *
 * Write a program that counts the number of vowels in a sentence.
 *
 */


int countVowels(char* str)
{
	int count = 0;
	
	for (int i = 0; str[i] != '\0'; i++)
	{
		char c = tolower(str[i]);
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		{
			count++;
		}
	}
	return count;
}

int main()
{
	char str[MAX_LENGTH];
	
	printf("Enter a string: ");
	fgets(str, MAX_LENGTH, stdin);
	
	int vowels = countVowels(str);
	
	printf("Number of vowels: %d\n", vowels);
	
	return 0;
}
