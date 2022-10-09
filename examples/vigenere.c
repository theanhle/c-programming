#include <stdio.h>
#include <string.h>

int main()
{
	char text[] = "thecrazyprogrammer";
	char key[] = "hello";
	int type = 1; // 1: encode, -1 decode

	int i, j, v, key_len = strlen(key), text_len = strlen(text);

	for (i = 0, j = 0; i < text_len; i++, j = (j + 1) % key_len)
	{
		v = text[i] + type*(key[j] - 'a');
		if (v > 'z')
			v = v - 26;
		else if (v < 'a')
			v = v + 26;
		printf("%c", v);
	}

	return 0;
}
