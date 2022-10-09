/* https://www.hackerrank.com/challenges/querying-the-document/problem?isFullScreen=true */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ****append_paragraph(char ****doc, int *nb_paragraphs)
{
	*nb_paragraphs += 1;
	doc = realloc(doc, *nb_paragraphs * sizeof(char ***));
	return doc;
}

char ***append_sent(char ***paragraph, int *nb_sents)
{
	*nb_sents += 1;
	paragraph = realloc(paragraph, *nb_sents * sizeof(char**));
	return paragraph;
}

char **append_word(char **sent, int *nb_words)
{
	*nb_words += 1;
	sent = realloc(sent, *nb_words * sizeof(char*));
	return sent;
}

char *append_char(char *word, int *nb_chars, char c)
{
	*nb_chars += 1;
	word = realloc(word, *nb_chars * sizeof(char));
	word[*nb_chars - 1] = c;
	return word;
}

char ****get_document(char *text)
{
	char ****doc = NULL; // document
	int np = 0;   // number of paragraphs in the document
	int ns = 0;   // number of sents in the last paragraph
	int nw = 0;   // number of words in the last sent
	int nc = 0;   // number of chars in the last word

	char *s = calloc(3 + strlen(text) + 1, sizeof(char));
	strcpy(s, "\n. ");
	strcat(s, text);

	for (int i = 0; s[i]; i++)
	{
		switch (s[i])
		{
			case '\n':
				doc = append_paragraph(doc, &np);
				ns = nw = nc = 0;
				break;
			case '.':
				doc[np-1] = append_sent(doc[np-1], &ns);
				nw = nc = 0;
				break;
			case ' ':
				if (nw > 0)
                    doc[np-1][ns-1][nw-1] = append_char(doc[np-1][ns-1][nw-1], &nc, '\0');
				doc[np-1][ns-1] = append_word(doc[np-1][ns-1], &nw);
				nc = 0;
				break;
			default:
				doc[np-1][ns-1][nw-1] = append_char(doc[np-1][ns-1][nw-1], &nc, s[i]);
		}
	}

	return doc;
}

void add_word(char **sent, char *word)
{
	
}

int main()
{
	/* char text[] = "Learning C is fun.\nLearning pointers is more fun. It is good to have pointers."; */
	/* char ****doc = get_document(text); */

	/* printf("%s", doc[0][0][0]); */

	return 0;
}
