//
//   fortune2.c
//   Alan B.
//   3/10/16
//
//   This pgm will play Wheel of Fortune
//
//   Enhancements TBD:
//     (1)  If user types nothing, make then enter their guess again
//     (2)  If user guess same letter more than once, tell them they
//             have already guessed that letter.
//     (3)  Allow the user to end pgm by typing "quit" instead of
//             guessing a letter.
//     (4)  Only allow the user a maximum no. of guesses.
//     (5)  Write a function that creates the display string.
//     (6)  A better way to set the secret phrase.
//          (a) prompt the user (?)
//          (b) get the secret from the command line
 
   

#include <stdio.h>
#include <string.h>

#define MAX_PHRASE_LENGTH 128
#define SPCL_CHAR '?'
#define MAX_GUESSES 10

int containsCharacter (char string[], char charToLookFor);
void printExpanded (char string[]);
char getGuess();
void updateDisplayString(char display[], char secret[], char guess);
int puzzleIsSolved (char display[]);

int main()
{
    char secretPhrase[MAX_PHRASE_LENGTH + 1];
    char displayPhrase[MAX_PHRASE_LENGTH + 1];
    char guess;
    int  guessCounter = 0, i, nonDuplicateGuess;
    char guesses[26];

    strcpy(secretPhrase,  "apple cream pie");
    strcpy(displayPhrase, "_____ _____ ___");

    while(1)
    {
        printExpanded(displayPhrase);
        guess = getGuess();
        nonDuplicateGuess = 1;  // Assume it's non duplicate
        if (guessCounter == 0)  // Is this first guess
        {
            guesses[0] = guess;
        } else {
            for(i = 0; i < guessCounter; ++i)
            {
                if(guesses[i] == guess)
                {
                    printf("You have already guessed %c\n", guess);
                    nonDuplicateGuess = 0;
                    break;
                }
                else
                {
                    guesses[guessCounter] = guess;
                }
            }
        }
        if (nonDuplicateGuess)
        {
            guessCounter++;
        }        

        if (containsCharacter(secretPhrase, guess))
        {
            updateDisplayString(displayPhrase, secretPhrase, guess);
            if (puzzleIsSolved(displayPhrase)) {
                printf("You got it!\n");
                break;
            }
        }
    }
 
    return 0;
}

void printExpanded (char string[])
{
    int i;

    for (i = 0; string[i] != '\0'; ++i) 
    {
        printf("%c ", string[i]);
    }
    printf("\n");
}

char getGuess()
{
    char line[48];

    printf("Please guess a letter: ");
    fgets(line, 48, stdin);

    if(strcmp(line,"quit") == 0) 
    {
        // terminate pgm -->  exit(1);
        //
        // or return some special indicate -->  return('?');
    }

    //  If user types nothing, we should make them do it again

    return line[0];
}

void updateDisplayString(char display[], char secret[], char guess)
{
    int i;

    for(i = 0; secret[i] != '\0'; ++i)
    {
        if(secret[i] == guess)
        {
            display[i] = guess;
        }
    }
}

int puzzleIsSolved (char display[])
{
    int i, solved = 1;
    
    for(i = 0; display[i] != '\0'; ++i)
    {
        if(display[i] == '_')    // I had:  = instead  ==
        {
            solved = 0;
            break;
        }
    }

    return solved;
}

int containsCharacter (char string[], char charToLookFor)
{
    int i;
    int found = 0;    // use as a "flag"

    for (i = 0; string[i] != '\0'; ++i)
    {
        if(string[i] == charToLookFor)
        {
            found = 1;
            break;
        }
    }
    return found;
}
