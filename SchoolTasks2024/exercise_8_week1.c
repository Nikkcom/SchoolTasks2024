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

#define MAX_NAME_LENGTH 100
#define MAX_CONTACTS 10
#define MAX_PHONE_LENGTH 8
#define MAX_COUNTRY_CODE_LENGTH 4

// Function prototypes.
void displayContacts(struct contact contacts[], int contact_amount);
void addContact(struct contact contacts[], int contact_amount);

struct contact {
	char name[MAX_NAME_LENGTH];
	char country_code[MAX_COUNTRY_CODE_LENGTH];
	char phone_number[MAX_PHONE_LENGTH];
};

void exercise_8() {
	struct contact contacts[MAX_CONTACTS];
	int menu_selection, contact_amount = 0;
	do
	{
		printf("-------------------------------\n");
		printf("Type in what you wish to do: \n");
		printf("0 - Exit.\n");
		printf("1 - Add Contact.\n");
		printf("2 - Display Contacts.\n");
		scanf_s("%d", &menu_selection);

		switch (menu_selection) {
		case 0:
			printf("Exiting program...\n");
			break;
		case 1:
			addContact(contacts, contact_amount);
			break;
		case 2:
			displayContacts(contacts, contact_amount);
			break;
		}
	} while (menu_selection != 0);
}

void displayContacts(struct contact contacts[], int contacts_amount) {
	int i;
	if (contacts_amount == 0) {
		printf("You have no contacts saved!\n\n");
		return;
	}
	for (i = 0; i < contacts_amount; i++) {
		printf("Name: %s\n", contacts[i].name);
		printf("Phone Number: %s %s\n", contacts[i].country_code, contacts[i].phone_number);
	
	}
}

void addContact(struct contact contacts[], int contact_amount) {
	if (contact_amount >= MAX_CONTACTS) {
		printf("You can't store more contacts. You have %d contacts already!5\n\n", MAX_CONTACTS);
		return;
	}
	int val1, val2, val3;
	do
	{
		printf("Please enter the name of person you wish to add: \n");
		val1 = scanf_s("%s", contacts[contact_amount].name, MAX_NAME_LENGTH);
		printf("val1 %d\n", val1);

		printf("Please enter the phone number: \n");
		val2 = scanf_s("%s", contacts[contact_amount].phone_number, MAX_PHONE_LENGTH);
		printf("val2 %d\n", val2);
		printf("%zu bytes", sizeof(contacts[contact_amount].phone_number));

		printf("Please enter the country code (00XXX or +XXX): \n");
		val3 = scanf_s("%s", contacts[contact_amount].country_code, MAX_COUNTRY_CODE_LENGTH);
		printf("val3 %d\n", val3);
	} while (val1 != 1 || val2 != 1 || val3 != 1);



}











