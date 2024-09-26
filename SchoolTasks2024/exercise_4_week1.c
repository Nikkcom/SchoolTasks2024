/*
Area and Perimeter of a Circle:
a. Define a constant for the value of pi (3.14159).
b. Ask the user to enter the radius of a circle.
c. Calculate the area using the formula: A = pi * r * r and the perimeter using: P
= 2 * pi * r.
d. Print both values using format specifiers.
*/
#include <stdio.h>
#include <stdlib.h>
void exercise_4() {
	const double PI = 3.1415;
	char radiusstring[10];
	double radius;
	double a, p;

	printf("Enter the radius of a circle: \n");
	gets(radiusstring);
	radius = (double) atoi(radiusstring);

	a = PI * radius * radius;
	p = 2.0 * PI * radius;

	printf("Area is %.2f and perimeter is %.2f", a, p);
}