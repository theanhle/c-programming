#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
	char s[100], *p;
	int i;

	scanf("%[^\n]", s);

	i = 0;
	while (s[i] == ' ')
		i++;
	memmove(s, s+i, strlen(s + i) + 1);

	i = strlen(s) - 1;
	while (s[i] == ' ')
		i--;
	s[i+1] = '\0';
	
	do
	{
		p = strstr(s, "  ");
		if (p != NULL)
			memmove(p, p+1, strlen(p+1) + 1);
		else
		{
			p = strstr(s, "\t");
			if (p != NULL)
				*p = ' ';
		}
	} while (p != NULL);		
	
	for (i = 1; s[i]; i++)
		if (s[i-1] == ' ')
			s[i] = toupper(s[i]);
		else
			s[i] = tolower(s[i]);

	if (strlen(s))
		s[0] = toupper(s[0]);

	printf("|%s|", s);

	return 0;
}
