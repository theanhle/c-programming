#include <stdio.h>

int main()
{
	/* char ****doc = {{{"Learning", "C", "is", "fun"}}, {{"Learning", "pointers", "is", "more", "fun"}, {"It", "is", "good", "to", "have", "pointers"}}}; */

	char *word = "word";
	/* printf("%s", word); */

	char **sent = {"this", "is", "a", "sentence"};
	for(int i = 0; i < 4; i++)
		printf("%s ", sent[i]);
	

	return 0;
}
