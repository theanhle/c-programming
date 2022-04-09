/* Chuong trinh xu ly xau ki tu: */
/* 1. Ki tu dau viet hoa, cac ki tu khac viet thuong */
/* 2. Sau dau cham, dau phay la mot dau cach */
/* 3. Dau cham, dau phay phai duoc viet sat vao ki tu lien truoc */
/* 4. Giua cac tu la mot dau cach */

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
	char s[200], t[200], c;
	int i, n = 0;

	scanf("%[^\n]", s);

	for (i = 0; i <= strlen(s); i++)
		if (s[i] == ' ')
		{
			if (n > 0 && t[n-1] != ' ')
				t[n++] = ' ';
		}
		else if (s[i] == '.' || s[i] == ',')
		{
			if (t[n-1] == ' ')
				t[n-1] = s[i];
			else
				t[n++] = s[i];
		}
		else if (n == 0)
			t[n++] = toupper(s[i]);
		else if (n > 1 && t[n-1] == ' ' && t[n-2] == '.')
			t[n++] = toupper(s[i]);
		else if (n > 0 && (t[n-1] == '.' || t[n-1] == ','))
		{
			t[n++] = ' ';
			if (t[n-2] == '.')
				t[n++] = toupper(s[i]);
			else
				t[n++] = s[i];
		}
		else
			t[n++] = tolower(s[i]);

	printf("%s", t);

	return 0;
}

