#include <stdio.h>

int main()
{
    char s1[31], s2[31], s3[31], s4[31];
    char s5[31], s6[31], s7[31], s8[31];
	
    scanf("%s", s1); // Garry Kasparov -> Garry
    fflush(stdin);
    scanf("%3s", s2); // Garry Kasparov -> Gar
    fflush(stdin);
    scanf("%[^\n]", s3); // Garry Kasparov -> Garry Kasparov
    fflush(stdin);
    scanf("%[0-9]", s4); // 012a3 -> 012
    fflush(stdin);
    scanf("%[^0-9]", s5); // abc1d -> abc
    fflush(stdin);
    scanf("%[0-3ab]", s6); // 01acb -> 01a
    fflush(stdin);
    scanf("%3[0-3ab]", s7); // 012ab -> 012
    fflush(stdin);
    scanf("%[0-3][^a-b]", s8); // 01acb -> 01
	
    printf("\n%s\n%s\n%s\n%s", s1, s2, s3, s4);
    printf("\n%s\n%s\n%s\n%s", s5, s6, s7, s8);
	
    return 0;
}
