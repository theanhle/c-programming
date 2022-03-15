/* Write a program to
 * - read two matrices from the "inp.txt" file,
 * - multiply them, 
*  - and write the obtained matrix to the "out.txt" file.
*  For example,
*  inp.txt: 
*	2 3 
* 	1 2 3 
* 	3 4 5 
* 	3 4 
* 	1 0 2 3 
* 	2 3 1 0 
* 	3 2 1 1 
*  out.txt: 
* 	2 4 
* 	14 12 7 6 
* 	26 22 15 14 
*/

#include <stdio.h>

void get_array(FILE *f, int a[][100], int *ar, int *ac);
void multiply(int a[][100], int b[][100], int c[][100], int ar, int ac, int bc);
void write_array(char filename[], int a[][100], int rows, int cols);
	

int main()
{
	int a[100][100], b[100][100], c[100][100];
	int ar, ac, br, bc, i, j, k;
	FILE *f = NULL;

	f = fopen("inp.txt", "r");
	if (f == NULL)
		printf("Input file not found!");
	else
	{
		get_array(f, a, &ar, &ac);
		get_array(f, b, &br, &bc);
		if (ac != br)
			printf("Matrix dimensions are not compatible!");
		else
		{
			multiply(a, b, c, ar, ac, bc);
			write_array("out.txt", c, ar, bc);
		}
	}
	fclose(f);

	return 0;
}


void get_array(FILE *f, int a[][100], int *ar, int *ac)
{
	int i, j;
	
	fscanf(f, "%d%d", ar, ac);
	for (i = 0; i < *ar; i++)
		for (j = 0; j < *ac; j++)
			fscanf(f, "%d", &a[i][j]);
}

	
void multiply(int a[][100], int b[][100], int c[][100], int ar, int ac, int bc)
{
	int i, j, k;
	
	for (i = 0; i < ar; i++)
		for (j = 0; j < bc; j++)
			for (c[i][j] = 0, k = 0; k < ac; k++)
				c[i][j] += a[i][k] * b[k][j];
}
	
	
void write_array(char filename[], int a[][100], int rows, int cols)
{
	int i, j;
	FILE *f = fopen(filename, "w");
	
	fprintf(f, "%d %d\n", rows, cols);
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			fprintf(f, "%d ", a[i][j]);
		fprintf(f, "\n");
	}
	fclose(f);
}
