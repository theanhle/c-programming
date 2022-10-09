#include <stdio.h>
#define MAXLEN 100

typedef struct student
{
	int id;
	char name[31];
	float grade;
} student;


void read_data(student s[], int *n)
{
	int i;

	printf("Number of students: ");
	scanf("%d", n);
	for (i = 0; i < *n; i++)
	{
		printf("+ Student %d:\n", i+1);
		printf("  - ID: ");
		scanf("%d%*c", &s[i].id);
		printf("  - Name: ");
		scanf("%30[^\n]%*c", s[i].name);
		printf("  - Grade: ");
		scanf("%f%*c", &s[i].grade);
	}
}


void print_data(student s[], int n)
{
	int i;
	
	printf("List of students\n");
	printf("================\n");
	for (i = 0; i < n; i++)
		printf("%03d. %-30s %5.2f\n", s[i].id, s[i].name, s[i].grade);
}


void save(student s[], int n, char file[])
{
	int i;
	FILE *f = fopen(file, "w");

	for (i = 0; i < n; i++)
		fprintf(f, "%d|%s|%.2f\n", s[i].id, s[i].name, s[i].grade);

	fclose(f);
}


void load(student s[], int *n, char file[])
{
	*n = 0;
	FILE *f = fopen(file, "r");

	while (fscanf(f, "%d|%[^|]|%f\n", &s[*n].id, s[*n].name, &s[*n].grade) != EOF)
		(*n)++;

	fclose(f);
}


int main()
{
	student s[100];
	int n;

	/* read_data(s, &n); */
	/* save(s, n, "students.txt"); */

	load(s, &n, "students.txt");
	print_data(s, n);

	return 0;
}
