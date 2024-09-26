/*
Basic Input and Output:
a. Write a program that prompts the user to enter their name and age. Store
these in appropriate variables. Then, print out a message saying, "Hello,
[name]. You are [age] years old!" using format specifiers.
b. Once this is done, implement a check to ensure that the age entered is
between 0 and 100. If the user enters an invalid age, prompt them to enter it
again.
c. Once the age is entered, categorise the user as:
i. Child (0-12)
ii. Teenager (13-19)
iii. Adult (20-59)
iv. Senior (60 and above)
d. Print out the category along with their name and age.
*/
#include <stdio.h>
static void exercise_1() {

	const char CATEGORIES[4][8] = { "Child", "Teenager", "Adult", "Senior" };

	char agestring[4];
	char name[20];
	int age;
	char category[8];

	printf("Please enter your name: \n");
	gets(name);
	printf("Hello, %s\n", name);

	printf("Please enter your age: \n");
	gets(agestring);
	age = atoi(agestring);
	printf("Oh hello there, you're %d years old.", age);

	while (age <= 0 || age >= 100) {
		printf("'%s' is not a valid age. Please enter your age: \n", agestring);
		gets(agestring);
		age = atoi(agestring);
	}

	if (age > 0 || age <= 13) {
		printf("Your name is %s. You're %d eyars old, which makes you a %s.", name, age, CATEGORIES[0]);
	}
	else if (age > 13 || age <= 19) {
		printf("Your name is %s. You're %d eyars old, which makes you a %s.", name, age, CATEGORIES[1]);
	}
	else if (age > 19 || age <= 59) {
		printf("Your name is %s. You're %d eyars old, which makes you a %s.", name, age, CATEGORIES[2]);
	}
	else {
		printf("Your name is %s. You're %d eyars old, which makes you a %s.", name, age, CATEGORIES[3]);
	}
}