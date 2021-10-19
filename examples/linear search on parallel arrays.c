#include <stdio.h>
#define MAX_ITEMS 100

/*
    Product Id      Price     Quantity
        12          100         3.5
        34          250         4.5
        17          120         2.8
        89          180         4.3
*/

void get_items(int prod_id[], int price[], double quantity[], int *n)
{
    int i;
    
    printf("Enter number of items: ");
    scanf("%d", n);
    
    for (i = 0; i < *n; i++)
    {
        printf("\nEnter item %d:\n", i+1);
        printf(" + Product ID: ");
        scanf("%d", &prod_id[i]);
        printf(" + Price: ");
        scanf("%d", &price[i]);
        printf(" + Quantity: ");
        scanf("%lf", &quantity[i]);
    }
}

void print_items(int prod_id[], int price[], double quantity[], int n_items)
{
    int i;
    printf("\nProduct Id   Price   Quantity\n");
    printf("=============================\n");
    for (i = 0; i < n_items; i++)
        printf("%010d   %5d   %8.2lf\n", prod_id[i], price[i], quantity[i]);
}

int find(int search, int key[], int size)
{
    int i = 0, rc = -1;
    for (i = 0; i < size && rc == -1; i++)
        if (search == key[i])
            rc = i;
    return rc;
}

int main ()
{
    int prod_id[MAX_ITEMS], price[MAX_ITEMS];
    double quantity[MAX_ITEMS];
    int n_items, pid, idx;
    
    get_items(prod_id, price, quantity, &n_items);
    print_items(prod_id, price, quantity, n_items);
    
    printf("\nEnter ID of the product you want to find: ");
    scanf("%d", &pid);
    
    idx = find(pid, prod_id, n_items);
    if (idx == -1)
        printf("No item found.");
    else
        printf("Product ID: %d, Price: %d, Quantity: %.2lf", prod_id[idx], price[idx], quantity[idx]);
         
    return 0;
}