/*
Temperature Conversion:
	a. Define a constant for the conversion ratio between Fahrenheit and Celsius
	(9.0/5.0).
	b. Prompt the user to input a temperature in Celsius.
	c. Convert this temperature to Fahrenheit using the formula:
	i. F = C * (9.0/5.0) + 32.
	d. Print the temperature in Fahrenheit to two decimal places.

*/
#include <stdio.h>
void exercise_2() {
	double const CONVERSION_RATE = 9.0 / 5.0;
	char celsiusstring[5];
	double celsius, fahrenheit;

	printf("Enter the temperature you wish TO convert from Celsius to Fahrenheit: \n");
	gets(celsiusstring);
	celsius = atoi(celsiusstring);

	

	fahrenheit = celsius * CONVERSION_RATE + 32.0;

	printf("%.2f degrees celsius equals %.2f degrees fahrenheit.", celsius, fahrenheit);
}