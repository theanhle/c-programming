#include <stdio.h>
#include <stdlib.h>

struct Student
{
	int id; 
	char name[15]; 
	float grade; 
};


int main()
{
	struct Student *students = (Student*)malloc(3 * sizeof(*students));
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("Student %d:\n", i+1);
		printf("  + ID: ");
		scanf("%d", &students[i]->id);
		printf("  + Name: ");
		scanf("%*c%[^\n]", students[i]->name);
		printf("  + Grade: ");
		scanf("%*c%f", &students[i]->grade);
	}

	printf("\n%4s  %-15s%8s", "ID", "Name", "Grade");
	printf("\n=============================\n");
	for (i = 0; i < 3; i++)
		printf("%4d  %-15s%8.1f\n", students[i]->id, students[i]->name, students[i]->grade);

	free(students);

	return 0;
}
