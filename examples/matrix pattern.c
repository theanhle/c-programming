/* print matrix pattern of numbers
 * n = 3
 * 3 3 3 3 3
 * 3 2 2 2 3
 * 3 2 1 2 3
 * 3 2 2 2 3
 * 3 3 3 3 3
 */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int m = 2*n - 1;
    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < m; c++)
        {
            int min = r;
            if (min > c)
                min = c;
            if (min > m - 1 - r)
                min = m - 1 - r;
            if (min > m - 1 - c)
                min = m - 1 - c;
            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}
