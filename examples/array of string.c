#include <stdio.h>
#include <string.h>
#define MAX_LEN 50

void get_names(char names[][MAX_LEN], int *n);
void print_names(char names[][MAX_LEN], int n);
void bubble_sort(char a[][MAX_LEN], int size);

int main()
{
    char names[100][MAX_LEN];
    int n, i;
    
    get_names(names, &n);
    bubble_sort(names, n);
    print_names(names, n);
    
    return 0;
}

void get_names(char names[][MAX_LEN], int *n)
{
    int i;
    scanf("%d", n);
    for (i = 0; i < *n; i++)
    {
        printf("Name %d: ", i+1);
        scanf("%*c%[^\n]", names[i]);
    }
}

void print_names(char names[][MAX_LEN], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%s ", names[i]);
}

void bubble_sort(char a[][MAX_LEN], int size)
{
    int i, j;
    char temp[MAX_LEN];
    for (i = size - 1; i > 0; i--)
        for (j = 0; j < i; j++)
            if (strcmp(a[j], a[j+1]) > 0)
            {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j+1]);
                strcpy(a[j+1], temp);
            }
}
