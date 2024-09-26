/*
Power Function:
a. Create a function double power(double base, int exponent) that calculates the result
of raising the base to the exponent without using the built-in pow() function.

*/
#include <stdio.h>

// Function prototype
int double_power(int base, int exponent);

void exercise_6() {
	printf("2 to the power of 4 is %d.\n", double_power(2, 4));
	printf("3 to the power of 3 is %d.\n", double_power(3, 3));
	printf("7 to the power of 3 is %d.\n", double_power(7, 3));
}

int double_power(int base, int exponent) {

	// Any number to the power of 0 is 1.
	if (exponent == 0) return 1;

	// Sets the base number for multiplication
	int num = 1;

	// Multiplies the number by itself n times
	for (int i = 0; i < exponent; i++) {
		num *= base;
	}
	return num;
}