#include <stdio.h>
#include <stdlib.h>

char function_choice();
void add_product();
void update_product();
void delete_product();


int main()
{
	char choice;
	do
	{				
		choice = function_choice();						
		
		switch (choice)
		{
			case 'a':
				add_product();
				break;
			case 'b':
				update_product();	
				break;
			case 'c':
				delete_product();						
		}
		
		if (choice != 'q')
		{			
			printf("\n\n---\n");
			printf("Press any key to back to main menu.");
			getch();
		}		
	} while (choice != 'q');   	 
	
    return 0;
}


char function_choice()
{	
	char choice;
	system("cls");
	printf("Order Management System\n");
	printf("=======================\n");	
	
	printf("\na) Add new product");
	printf("\nb) Update a product");		
	printf("\nc) Delete a product");
	printf("\nq) Quit\n");
	
	printf("\n---\n");
	printf("Enter a letter (a, b, ..) to select the corresponding function: ");
	
	fflush(stdin);
	choice = getchar();
	system("cls");
	
	return choice;
}


void add_product()
{	
	printf("Add a new product:\n");
	printf("==================\n\n");
	
	printf("Write your code here to add a new product.");
}


void update_product()
{
	printf("Update a product:\n");
	printf("=================\n\n");
	
	printf("Write your code here to update a product.");
}


void delete_product()
{
	printf("Delete a product:\n");
	printf("=================\n\n");
	
	printf("Write your code to delete a product.");
}
