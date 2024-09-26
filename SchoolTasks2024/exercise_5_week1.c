/*
Largest Element:
a. Write a program that finds the largest element in an array.
b. The user should be able to enter 10 values into the array.
c. You should use a loop to get the largest value and use comparisons to check to see if
the previous value in the array is greater than or less than the current value, and so
on.
*/
#include <stdio.h>

// Sets the size of array as a constant.
#define ARRAY_SIZE 10

// Function prototype.
int find_largest_entry(int int_array[], int entries);

void exercise_5() {
	int arr[ARRAY_SIZE];

	printf("You will need to enter a total of %d positive, whole numbers.\n", ARRAY_SIZE);

	// Get user input. Runs for each entry in the array, to fill the array with user numbers.
	for (size_t i = 0; i < ARRAY_SIZE; i++) {
		printf("Enter value #%zu: \n", i + 1);

		// Stores the user input in the array.
		scanf_s("%d", &arr[i]);
	}

	int largest_in_array = find_largest_entry(arr, ARRAY_SIZE);
	printf("The largest number you have typed in is %d\n", largest_in_array);
}


// Finds the largest entry of an array containing integers.
int find_largest_entry(int int_array[], int entries) {
	// Sets the first entry as the largest found. 
	int largest_int = int_array[0];

	printf("Looping through an array with %d entries...\n", entries);
	printf("Current largest number is %d.\n", largest_int);

	// Loops through every entry of the array, and starts on the second entry.
	for (size_t i = 1; i < entries; i++) {

		// Checks if the current entry is larger than the stored largest value found.
		// If so, stored value is overwritten to represent the newly found largest integer.
		if (int_array[i] > largest_int) {
			printf("Found an even largest number. %d got replaced by %d!\n", largest_int, int_array[i]);
			largest_int = int_array[i];
		}
	}
	// Returns the largest integer found.
	return largest_int;
}