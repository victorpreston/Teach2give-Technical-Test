#include "main.h"

void capitalize(char* str);

/**
 * Question 4: Capitalize Words
 *
 * Write a program that accepts a string as input,
 * capitalizes the first letter of each word in the
 * string, and then returns the result string.
 *
 */

void capitalize(char* str)
{
	int i = 0;
	
	/* Capitalize the first character of the string */
	if (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
	
	/* Capitalize the first character after each space */
	while (str[i] != '\0')
	{
		if (str[i-1] == ' ' && str[i] != ' ')
		{
			str[i] = toupper(str[i]);
		}
		i++;
	}
}

int main()
{
	char str[MAX_LENGTH];
	
	printf("Enter the string: ");
	fgets(str, MAX_LENGTH, stdin);
	
	capitalize(str);
	
	printf("Capitalized string: %s", str);

    return 0;
}
