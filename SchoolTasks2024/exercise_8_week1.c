/*
Simple Contact List
a. In this simpler system, users can store names of their contacts (without any
additional details like phone numbers or addresses). They can also view the list of
contacts. It’s essentially a list manager.
b. The max contacts should be 10.
c. The max name length should be 100.
d. You need to check these conditions using if statements before their values are
stored into the array.
e. You should use either #define or const to store the values for the max length and
max contacts.
f. You can use a while loop to display a menu to the console, where the user can select
either 0 – Exit, 1 – Add Contact or 2 – Display Contacts.
g. Use a switch case to check their input from the menu and then direct to the correct
function.
i. You may want to include an addContact() and displayContacts() function.
h. Bonus: If you can do this, see if you can add a telephone number to the contacts –
you may want to use structs for this.
*/
#include <stdio.h>
#include <stdlib.h>

// Defines constants.
#define MAX_NAME_LENGTH 100
#define MAX_CONTACTS 10
#define MAX_PHONE_LENGTH 9
#define MAX_COUNTRY_CODE_LENGTH 5

// Function prototypes.
void displayContacts(struct contact contacts[], int contact_amount);
void addContact(struct contact contacts[], int *contact_amount);

// Structure to hold contact values.
struct contact {
	char name[MAX_NAME_LENGTH];
	char country_code[MAX_COUNTRY_CODE_LENGTH];
	char phone_number[MAX_PHONE_LENGTH];
};

void exercise_8() {

	// Declares an array containing contacts.
	struct contact contacts[MAX_CONTACTS];
	int menu_selection, contact_amount = 0;
	
	// A loop which runs atleast once. Prompting the user to select a menu choice.
	do
	{
		printf("Type in what you wish to do: \n");
		printf("0 - Exit.\n");
		printf("1 - Add Contact.\n");
		printf("2 - Display Contacts.\n");

		// Registers and stores the user input in a variable.
		scanf_s("%d", &menu_selection);

		// Switch statement to handle the difference user selections.
		switch (menu_selection) {

		// Exits the program.
		case 0:
			printf("Exiting program...\n");
			break;

		// Calls the function to add a person to the contact list.
		case 1:
			system("cls");
			addContact(contacts, &contact_amount);
			break;

		// Calls the function to display the contact list.
		case 2:
			system("cls");
			displayContacts(contacts, contact_amount);
			printf("\n");
			break;
		}

	// Reruns the menu prompt until the user selects to exit
	} while (menu_selection != 0);
}

// Function to display the contacts of an user
void displayContacts(struct contact contacts[], int contacts_amount) {

	// Displays no contact list if the user got no contacts
	if (contacts_amount == 0) {
		printf("You have no contacts saved!\n\n");
		return;
	}

	// Iterates through the contacts array and prints the values of each contact.
	printf("Your contacts:\n\n");
	for (int i = 0; i < contacts_amount; i++) {
		printf("Name: %s\n", contacts[i].name);
		printf("Phone Number: %s %s\n", contacts[i].country_code, contacts[i].phone_number);
	}
}

// Function to add a contact to the stored contacts.
void addContact(struct contact contacts[], int *contact_amount) {

	// Checks if the user reached the max amount of contacts.
	if (*contact_amount >= MAX_CONTACTS) {
		printf("You can't store more contacts. You have %d contacts already!5\n\n", MAX_CONTACTS);
		return;
	}

	// Declares values to determine if the received values from user is valid values.
	int val1, val2, val3;

	// Loops to verify valid user input before requesting the next.
	do {
		printf("Please enter the name of person you wish to add: \n");
		val1 = scanf_s("%s", contacts[*contact_amount].name, MAX_NAME_LENGTH);
		system("cls");
	} while (val1 != 1);
	do {
		printf("Please enter the phone number: \n");
		val2 = scanf_s("%s", contacts[*contact_amount].phone_number, MAX_PHONE_LENGTH);
		system("cls");

	} while (val2 != 1);
	do {
		printf("Please enter the country code (+47, +210...): \n");
		val3 = scanf_s("%s", contacts[*contact_amount].country_code, MAX_COUNTRY_CODE_LENGTH);
		system("cls");
	} while (val3 != 1);

	// Increases the total contacts count.
	(*contact_amount)++;
}











