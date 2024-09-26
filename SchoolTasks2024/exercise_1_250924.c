#include <stdio.h>
static void exercise_1() {

	const char CATEGORIES[4][8] = { "Child", "Teenager", "Adult", "Senior" };

	char agestring[4];
	char name[20];
	int age;
	char category[8];

	printf("Please enter your name: ");
	gets(name);

	printf("Please enter your age: ");
	fgets(agestring, sizeof(agestring), stdin);

	age = atoi(agestring);

	while (age == 0) {
		printf("'%s' is not a valid age. Please enter your age: \n", agestring);
		fgets(agestring, sizeof(agestring), stdin);
		age = atoi(agestring);
	}

	printf("You're name is %s. You're %d years old, which makes you a %s", name, age, CATEGORIES[1]);
}