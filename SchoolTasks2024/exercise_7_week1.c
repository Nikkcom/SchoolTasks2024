/*
Mode Finder:
a. Given an array of numbers, find the mode (number that appears most frequently).
*/
#include <stdio.h>
#define ARRAY_SIZE 10

// Structure to hold the integer value and its occurences in the array
struct pair {
	int value;
	int occurence;
};

struct pair findMode(int arr[], int length);

void exercise_7() {
	int arr[ARRAY_SIZE];
	struct pair arr_mode;
	
	printf("You should now enter a total of %d potitive, whole numbers.\n", ARRAY_SIZE);

	// Get user input. Runs for each entry in the array, to fill the array with user numbers.
	for (size_t i = 0; i < ARRAY_SIZE; i++) {
		printf("Enter value #%zu: \n", i + 1);

		// Stores the user input in the array.
		scanf_s("%d", &arr[i]);
	}

	arr_mode = findMode(arr, ARRAY_SIZE);
	printf("The mode is %d with %d occurences.", arr_mode.value, arr_mode.occurence);
}
// Returns the mode 
struct pair findMode(int arr[], int length) {
	int i, j;
	struct pair mode;
	mode.value = arr[0];
	mode.occurence = 1;

	// Using nested loops. Iterates every entry.
	for (i = 0; i < length; i++) {
		int current_count = 0;

		// Loops through the list to count the occurence of the current array entry, i
		for (j = 0; j < length; j++) {
			if (arr[j] == arr[i]) {
				current_count++;
			}
		}
		if (current_count >= mode.occurence) {
			mode.value = arr[i];
			mode.occurence = current_count;
		}
	}
	return mode;
}
