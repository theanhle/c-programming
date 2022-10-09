/* n = 8
 			  1
            2 3 2
          3 4 5 4 3
        4 5 6 7 6 5 4
      5 6 7 8 9 8 7 6 5
    6 7 8 9 0 1 0 9 8 7 6
  7 8 9 0 1 2 3 2 1 0 9 8 7
8 9 0 1 2 3 4 5 4 3 2 1 0 9 8

row		#spaces		#numbers
 1		  n-1		1   
 2		  n-2		2, 3
 3		  n-3	    3, 5
 4		  n-4		4, 7
 .
 .
 n		  n-n		n, 2n-1 (%10)
*/

#include <stdio.h>

int main()
{
	int i, j, n;
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		for(j = 0; j < n-i; j++)
			printf("  ");
		for(j = i; j <= 2*i - 1; j++)
			printf("%d ", j%10);
		for(j = 2*i - 2; j >= i; j--)
			printf("%d ", j%10);
		printf("\n");
	}
	return 0;
}
