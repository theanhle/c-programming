/* n = 7		row		stars	spaces
 *		*		 0		  1		  3
 *	   ***		 1		  3		  2
 *	  *****		 2		  5		  1
 *	 *******	 3		  7		  0
 */

#include <stdio.h>


int main()
{
	int n, stars, spaces, i;

	scanf("%d", &n);

	stars = 1;
	spaces = n / 2;

	while (stars <= n)
	{
		for (i = 0; i < spaces; i++)
			printf(" ");
		for (i = 0; i < stars; i++)
			printf("*");
		printf("\n");

		stars += 2;
		spaces--;
	}

	return 0;
}
