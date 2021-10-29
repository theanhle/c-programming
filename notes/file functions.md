
### File Functions

Write to file

```c
FILE *fo = NULL;
fo = fopen("out.txt", "w");
if (fo == NULL)
    printf("Failed to open file!");
else
{
    fprintf(fo, "%s\n", "I was created by a C program.");
    fclose(fo);
}
```

Read from file

```c
int a;
char s[100];

FILE *fi = fopen("inp.txt", "r");
fscanf(fi, "%d %[^\n]", &a, s);
fclose(fi);
```

Read the whole file content

```c
char s[100];
FILE *fp = fopen("inp.txt", "r");
while (fscanf(fp, "%99[^\n]%*c", s) != EOF)
    printf("%s\n", s);
```

Write tabular information to file (use | as a delimiter)

```c
char id[3][7] = {"HE1234", "HE5678", "HE9012"};
char name[3][31] = {"Nguyen Van Tuan", "Tran Thu Hoai", "Le Thanh Nam"};
double grade[3] = {8.5, 9.2, 6};
int i;
	
FILE *fo = fopen("prf192.txt", "w");
	
for (i = 0; i < 3; i++)
    fprintf(fo, "%s|%s|%.1lf\n", id[i], name[i], grade[i]);
	
fclose(fo);
```

Read all records on the file and display them in a tabular format

```c
char id[3][7];
char name[3][31];
double grade[3];
int n, i;
	
FILE *fi = fopen("prf192.txt", "r");
	
n = 0;
while (fscanf(fi, "%6[^|]|%30[^|]|%lf%*c", id[n], name[n], &grade[n]) == 3)
    n++;
	
fclose(fi);
	
printf("%-13s%-23s%8s\n", "Student ID", "Student Name", "Grade");

for (i = 0; i < n; i++)
    printf("%-13s%-23s%8.1lf\n", id[i], name[i], grade[i]);
```
