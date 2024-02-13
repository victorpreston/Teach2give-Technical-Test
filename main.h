#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/* maximum length of stirng input */
#define MAX_LENGTH 100

/**
 * prototypes
 */

void fizzbuzz(int lowerLimit, int upperLimit);
void fibonacci(int limit);
bool isPowerOfTwo(int n);
void capitalize(char* str);
int reverse(int num);
int countVowels(char* str);

#endif /* teach2give */
