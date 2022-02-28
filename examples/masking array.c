#include <stdio.h>

int main()
{
    int sku[9] = {1234, 2345, 3456, 2345, 1234, 3456, 2345, 3456, 1234};
    int us[9] = {4, 15, 9, 7, 6, 3, 3, 12, 1};
    int acc_for[9] = {0};
    int n = 9, code, total, i, j;
    
    printf("sku   us\n");
    printf("========\n");
    for (i = 0; i < n; i++)
        printf("%-4d%4d\n", sku[i], us[i]);
    
    printf("\nsku   total\n");
    printf("===========\n");
    for (i = 0; i < n; i++)
        if (!acc_for[i])
        {
            code = sku[i];
            total = 0;
            for (j = i; j < n; j++)
                if (sku[j] == code)
                {
                    total += us[j];
                    acc_for[j] = 1;
                }
            printf("%-4d%7d\n", code, total);
        }

    return 0;
}

/*
sku   us    acc_for (masking array)
===================================
1234   4    1
2345  15    1
3456   9    1
2345   7    1
1234   6    1
3456   3    1
2345   3    1
3456  12    1
1234   1    1

i = 0 -> 8
i = 0: acc_for[0] == 0: code = 1234, total = 4 + 6 + 1 = 11
i = 1: acc_for[1] == 0: code = 2345, total = 15 + 7 + 3 = 25
i = 2: acc_for[2] == 0: code = 3456, total = 9 + 3 + 12 = 24
i = 3: acc_for[3] == 1
i = 4: acc_for[4] == 1
..
i = 8: acc_for[8] == 1

sku     total
=============
1234       11
2345       25
3456       24
*/
