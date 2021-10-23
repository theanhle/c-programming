#include <stdio.h>
#define MAX_SIZE 100

void get_data(int prod_id[], double price[], int *n)
{
    int i;
    
    printf("Enter number of products: ");
    scanf("%d", n);
    
    for (i = 0; i < *n; i++)
    {
        printf("\nEnter product %d:\n", i + 1);
        printf(" + Product ID: ");
        scanf("%d", &prod_id[i]);
        printf(" + Price: ");
        scanf("%lf", &price[i]);
    }
    
}

void print_data(int prod_id[], double price[], int n)
{
    int i;
    
    printf("\nProduct ID   Price\n");
    for (i = 0; i < n; i++)
        printf("%10d   %5.2lf\n", prod_id[i], price[i]);
}

void sort_products(int prod_id[], double price[], int n)
{
    int i, j, id;
    double p;
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (price[j] < price[j+1])
            {
                id = prod_id[i];
                prod_id[i] = prod_id[j];
                prod_id[j] = id;
                
                p = price[i];
                price[i] = price[j];
                price[j] = p;
            }
        }
    }
}

int main()
{
    int prod_id[MAX_SIZE];
    double price[MAX_SIZE];
    int n;
    
    get_data(prod_id, price, &n);
    print_data(prod_id, price, n);
    sort_products(prod_id, price, n);
    print_data(prod_id, price, n);

    return 0;
}
