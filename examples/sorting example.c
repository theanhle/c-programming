/*  Viet chuong trinh nhap vao n san pham: ma san pham, don gia
    hien thi danh sach san pham theo thu tu don gia giam dan
    Vi du:
    Enter #items: 3
    Item 1 (sku, price): 123 45
    Item 2 (sku, price): 234 12
    Item 3 (sku, price): 345 34
    
    Output:
    sku     price
    =============
    123        45
    345        34
    234        12
*/

#include <stdio.h>

void bubble_sort(int sku[], int price[], int size)
{
    int i, j;
    int temp;
    for (i = size - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (price[j] < price[j+1])
            {
                temp = price[j];
                price[j] = price[j+1];
                price[j+1] = temp;
                
                temp = sku[j];
                sku[j] = sku[j+1];
                sku[j+1] = temp;
            }
        }
    }
}

int main()
{
    int sku[100], price[100], n, i;
    
    printf("Enter #items: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Item %d (sku, price): ", i+1);
        scanf("%d%d", &sku[i], &price[i]);
    }
    
    bubble_sort(sku, price, n);
    
    printf("\nsku  price\n");
    printf("==========\n");
    for (i = 0; i < n; i++)
        printf("%3d%7d\n", sku[i], price[i]);
    
    return 0;
}
