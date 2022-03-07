#include <stdio.h>
#include <string.h>

void print(char name[][31], int age[], int n)
{
    int i;
    printf("name[][]   age[]   *n\n");
    printf("---------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%-8s%8d", name[i], age[i]);
        if (i == 0)
            printf("%5d", n);
        printf("\n");
    }
}

int removeDuplicates(char name[][31], int age[], int *n)
{
    int i, j, k, m = *n;
    
    for (i = 0; i < *n-1; i++)
        for (j = i+1; j < *n; j++)
            if (strcmp(name[i], name[j]) == 0)
            {
                for (k = j+1; k < *n; k++)
                {
                    strcpy(name[k-1], name[k]);
                    age[k-1] = age[k];
                }
                (*n)--;
            }
            
    return m - *n;
}

void get_data(char name[][31], int age[], int *n)
{
    int i;
    
    printf("Number of records: ");
    scanf("%d", n);
    for (i = 0; i < *n; i++)
    {
        printf("Person %d's infor (name, age): ", i+1);
        scanf("%s%d", name[i], &age[i]);
    }
}

int main()
{
    char name[100][31] = {"Homer", "Marge", "Homer", "Bart", "Marge", "Lisa"};
    int age[100] = {45, 22, 42, 14, 21, 8};
    int n = 6;
    
    get_data(name, age, &n);
    
    printf("\nBefore call to removeDuplicates\n");
    print(name, age, n);
    
    printf("\nNumber of removed records: %d\n", removeDuplicates(name, age, &n));
    
    printf("\nAfter call to removeDuplicates\n");
    print(name, age, n);

    return 0;
}
