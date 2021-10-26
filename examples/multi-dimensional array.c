#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, cols, r, c, sum;
    
    printf("Enter number of rows, number of columns: ");
    scanf("%d %d", &rows, &cols);
    
    printf("Enter the %dx%d array:\n", rows, cols);
    for (r = 0; r < rows; r++)
        for (c = 0; c < cols; c++)
            scanf("%d", &a[r][c]);
            
    printf("The 2D array you've just entered:\n");
    for (r = 0; r < rows; r++)
    {
        for (c = 0; c < cols; c++)
            printf("%3d", a[r][c]);
        printf("\n");
    }
    
    for (c = 0; c < cols; c++)
    {
        sum = 0;
        for (r = 0; r < rows; r++)
            sum += a[r][c];
        printf("%3d", sum);
    }

    return 0;
}
