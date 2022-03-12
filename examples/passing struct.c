#include <stdio.h>
#include <string.h>

/* struct Student */
/* { */
/* 	char id[4]; */
/* 	char name[50]; */
/* 	int grade; */
/* }; */

/* typedef struct Student Student; */

typedef struct
{
	char id[4];
	char name[50];
	int grade;
} Student;

void fun1(Student st)
{
	strcpy(st.id, "345");
	st.grade = 100;
}

void fun2(Student *st)
{
	strcpy(st->id, "456");
	st->grade = 99;
}

void fun3(Student st[])
{
	strcpy(st[0].id, "789");
	strcpy(st[0].name, "Le An Nhien");
	st[0].grade = 88;
}
int main()
{
	/* struct Student st; */
	Student st;
	Student students[10];

	strcpy(st.id, "123");
	strcpy(st.name, "Le Anh Minh");
	st.grade = 95;

	fun1(st);
	printf("%s, %s, %d\n", st.id, st.name, st.grade);

	fun2(&st);
	printf("%s, %s, %d\n", st.id, st.name, st.grade);

	fun3(students);
	printf("%s, %s, %d\n", students[0].id, students[0].name, students[0].grade);

	return 0;
}
