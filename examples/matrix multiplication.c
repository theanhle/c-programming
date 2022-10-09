/* write a program to multiply two matrices */
/* input: two matrices a[u, v], b[v, t] */
/* output: the result matrix c[u, t] */

#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100


void get_matrix(int a[][MAX_COLS], int *rows, int *cols)
{
	int r, c;
	scanf("%d%d", rows, cols);
	for (r = 0; r < *rows; r++)
		for (c = 0; c < *cols; c++)
			scanf("%d", &a[r][c]);
}


void multiply(int a[][MAX_COLS], int b[][MAX_COLS], int c[][MAX_COLS], int u, int v, int t)
{
	int i, j, k, val;
	for (i = 0; i < u; i++)
		for (j = 0; j < t; j++)
		{
			c[i][j] = 0;
			for (val = 0, k = 0; k < v; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
}


void print_matrix(int a[][MAX_COLS], int rows, int cols)
{
	int r, c;
	for (r = 0; r < rows; r++)
	{
		for (c = 0; c < cols; c++)
			printf("%4d", a[r][c]);
		printf("\n");
	}
}


int main()
{
	int a[MAX_ROWS][MAX_COLS], b[MAX_ROWS][MAX_COLS], c[MAX_ROWS][MAX_COLS];
	int u, v, t, i, j;

	get_matrix(a, &u, &v);
	get_matrix(b, &v, &t);
	multiply(a, b, c, u, v, t);
	printf("\n");
	print_matrix(c, u, t);

	return 0;
}
