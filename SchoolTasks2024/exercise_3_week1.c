/*
Simple Calculator:
a. Ask the user to enter two numbers.
b. Then ask the user to enter an operation (+, -, *, /).
c. Perform the operation on the two numbers and display the result. Use a
switch-case for the operations (see the lecture slides on how this might look).



*/
#include <stdio.h>
void exercise_3() {
	double num1, num2;
	char num1string[5], num2string[5];
	char operation[2];
	double result;

	printf("Please enter a number: \n");
	gets(num1string);
	num1 = (double) atoi(num1string);
	printf("You entered '%s'\n", num1string);

	printf("Please enter a second number: \n");
	gets(num2string);
	num2 = (double) atoi(num2string);
	printf("You entered '%s'\n", num2string);

	printf("Please enter an operator. ('+', '-', '*', '/')\n");
	gets(operation);
	
	switch (operation[0]) {
	case '+':
		result = num1 + num2;
		printf("%s + %s = %.2f", num1string, num2string, result);
		break;
	case '-':
		result = num1 - num2;
		printf("%s - %s = %.2f", num1string, num2string, result);
		break;
	case '*':
		result = num1 * num2;
		printf("%s * %s = %.2f", num1string, num2string, result);
		break;
	case '/':
		if (num1 == 0 || num2 == 0) {
			printf("You cant divide by zero bro");
			break;
		}
		result = num1 / num2;
		printf("%s / %s = %.2f", num1string, num2string, result);
		break;
	}
}