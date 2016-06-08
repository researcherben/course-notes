//
//   Exercise 9-1
//
#include <stdio.h>
#include <string.h>

#define NO_OF_WORDS 30
#define WORD_LENGTH 10

main()
{
     int i;
     char temp[WORD_LENGTH];
     char words[NO_OF_WORDS][WORD_LENGTH + 1];
     int counts[NO_OF_WORDS];
     int howmany = 0;           // HOW MANY DIFFERENT WORDS THUS FAR
     //
     //   INITIALIZE COUNTS AND WORDS
     //
     for (i = 0; i < NO_OF_WORDS; i++){
          counts[i] = 0;
	  words[i][0] = '\0';
     }
     //
     //    MAIN LOOP:  PROCESS A WORD AT A TIME
     //
     while(scanf("%s",temp) != EOF) {
	  //
	  //    SEARCH words ARRAY FOR temp string
	  //
          for(i = 0; i < howmany; i++)
	       if(strcmp(temp,words[i]) == 0) { // FOUND IT
		    counts[i]++;                // ADD 1 TO COUNT
		    break;                      // break OUT OF for LOOP
               }
	  if( i == howmany) {                   // temp NOT FOUND IN words
	       if ( howmany == NO_OF_WORDS ) {  //  ANY ROOM IN words array
		    printf("ARRAY FULL: no more words\n");   // NO ROOM
		    continue;                   //   BACK TO scanf
               }
	       strcpy(words[howmany],temp);      //   ROOM: COPY TO words
	       counts[howmany++]++;              //   ADD to COUNT and
	  }                                      //   ADD to howmany
     }
     for ( i = 0 ; i < howmany; i++)              //   PRINT THE RESULTS
          printf("%d %s\n", counts[i], words[i]);
}
