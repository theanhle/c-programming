#include <stdio.h>
#include <string.h>

void get_data(char names[][50], int *n)
{
    int i;
    
    printf("Enter n: ");
    scanf("%d%*c", n);
    
    for (i = 0; i < *n; i++)
    {
        printf("Name %d: ", i+1);
        scanf("%[^\n]%*c", names[i]);
    }
}

void print_data(char names[][50], int n)
{
    int i;
    
    printf("\n%-20s%8s\n", "Name", "Length");
    printf("============================\n");
    
    for (i = 0; i < n; i++)
        printf("%-20s%8ld\n", names[i], strlen(names[i]));
}

int main()
{
    char names[100][50];
    int n;
    
    get_data(names, &n);
    print_data(names, n);

    return 0;
}
