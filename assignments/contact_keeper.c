/* CONTACT KEEPER
 * ==============
 * 
 * So far, you've been learning the C programing language about two weeks.
 * Now is the right time to think about your assignment.
 * This semester, your task is to write a C program, namely Contact Keeper,
 * to manage your contacts easily and effectively.
 * 
 * One contact should have the following features:
 *		1. First Name
 *		2. Last Name
 *		3. Company
 *		3. Phone Number
 *		4. Email
 *		5. Working Address
 *		6. Home Address
 *		7. Birthday
 *
 * Data validation should be implemented, for example:
 *		1. Phone Number should be a integer number of 9 or 10 digits
 *		2. Bithday should be in the DD/MM/YYYY format 
 *
 * Your program should have at least six functions:
 *		1. Add new contact
 *		2. Edit contact
 *		3. Delete contact (by name or phone number)
 *		4. Search contact (by name or phone number)
 *		5. List all contacts with birthdays in a given month (sort by date)
 *		6. List all contacts in the table format (sort by name)
 *
 * The contact information should be permanently stored in a text file
 * so that when the program starts all contacts could be loaded automatically.
 *
 * Form a group of three members and enjoy this task!
 */


#include <stdio.h>
#include <stdlib.h>

void print_menu();
void add_contact();
void edit_contact();
void delete_contact();


int main()
{
	char choice;

	do
	{
		system("clear"); // for unix
		// system("cls"); // for windows
		print_menu();
		scanf("%c%*c", &choice);

		system("clear"); // for unix
		// system("cls"); // for windows

		printf("CONTACT KEEPER\n");
		printf("==============\n\n");

		switch(choice)
		{
			case '1':
				add_contact();
				break;
			case '2':
				edit_contact();
				break;
			case '3':
				delete_contact();
				break;
		}
		
		if (choice != 'q')
		{
			printf("\n\n---\n");
			printf("Press any key to back to main menu.");
			getchar();
		}
	}
	while (choice != 'q');

	return 0;
}


void print_menu()
{
	printf("CONTACT KEEPER\n");
	printf("==============\n\n");
	printf("1. Add Contact\n");
	printf("2. Edit Contact\n");
	printf("3. Delete Contact\n");
	printf("q. Quit\n\n");
	printf("Enter your choice (1/2/3/q): ");
}


void add_contact()
{
	printf("Write your code here to add new contact.");
}


void edit_contact()
{
	printf("Write your code here to edit contact.");
}


void delete_contact()
{
	printf("Write your code here to delete contact.");
}
