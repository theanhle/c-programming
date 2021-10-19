//  ProdId  Price   Quantity
    //   12      125      1.5
    //   45      152      2.6
    //   57      144      3.4
    
#include <stdio.h>
#define MAX_SIZE 100

int find(int search, int key[], int size)
{
    int i = 0, rc = -1;
    for (i = 0; i < size && rc == -1; i++)
        if (search == key[i])
            rc = i;
    return rc;
}

int main()
{
    int prod_id[MAX_SIZE], price[MAX_SIZE];
    double quantity[MAX_SIZE];
    int n_items, i, idx, max_price, pid;
    
    printf("Enter number of items: ");
    scanf("%d", &n_items);
    
    for (i = 0; i < n_items; i++)
    {
        printf("Enter item %d:\n", i+1);
        printf(" + Product ID: ");
        scanf("%d", &prod_id[i]);
        printf(" + Price: ");
        scanf("%d", &price[i]);
        printf(" + Quantity: ");
        scanf("%lf", &quantity[i]);
        printf("\n");
    }
    
    printf("Enter Product ID: ");
    scanf("%d", &pid);
    
    idx = find(pid, prod_id, n_items);
    
    if (idx == -1)
        printf("No item found.");
    else
        printf("Product ID: %d, Price: %d, Quantity: %.2lf", prod_id[idx], price[idx], quantity[idx]);

    return 0;
}
