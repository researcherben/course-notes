/*
	scanf.c - Print words from standard input, one word per line 
*/
#include <stdio.h>

#define WORDSIZE 40

main()	
{
	char word[WORDSIZE];
	int  word_number = 1;
	
	while(scanf("%s", word) != EOF) 
		printf("%d %s\n", word_number++, word);
}

