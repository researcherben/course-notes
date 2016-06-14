#include <stdio.h>
#include <string.h>
#define MAX_INPUT_LENGTH 100

void split_to_three_fields(char input[], char output1[], char output2[], char output3[]);
int main(){
  char line[MAX_INPUT_LENGTH], field1[MAX_INPUT_LENGTH], field2[MAX_INPUT_LENGTH], field3[MAX_INPUT_LENGTH];
  int indx=0;
  while(fgets(line,MAX_INPUT_LENGTH, stdin)){ // fgets returns a pointer (non-zero), unless EOF is detected
    line[strlen(line)-1]='\0';
    split_to_three_fields(line, field1, field2, field3);
    printf("%s\n",line);
    printf("string1: %s\nstring2: %s\nstring3: %s\n",field1, field2, field3);
  }

/* // the following also works, but isn't as elegant
  int input_char;
  while(( input_char = getchar()) != EOF ){ // if getchar returns -1, that's end of file. <stdio.h> 
    line[indx++]=input_char;
    if (input_char == '\n'){
      line[indx]='\0';
      line[strlen(line)-1]='\0';
      printf("input string: [[%s]]\n",line);
      indx=0;
      split_to_three_fields(line, field1, field2, field3);
      printf("string1: %s\nstring2: %s\nstring3: %s\n",field1, field2, field3);
    }
  }
*/

}



void split_to_three_fields(char input[], char output1[], char output2[], char output3[]){
//  printf("input string: [[%s]]\n",input);
  int indx =0, local_indx;
  char this_char=input[indx];
  while (this_char != ' '){
//    printf("%c\n",this_char);
    output1[indx]=this_char;
    this_char=input[++indx];
  }
  output1[indx]='\0'; // terminate string with trailing null character

  while (this_char == ' '){
    this_char=input[++indx];
  }

  local_indx=0; 
  while (this_char != ' '){
//    printf("%c\n",this_char);
    output2[local_indx]=this_char;
    this_char=input[++indx];
    local_indx++;
  }
  output2[local_indx]='\0'; // terminate string with trailing null character

  while (this_char == ' '){
    this_char=input[++indx];
  }

  local_indx=0; 
  while (this_char != '\0'){
//    printf("%c\n",this_char);
    output3[local_indx]=this_char;
    this_char=input[++indx];
    local_indx++;
  }
  output3[local_indx]='\0';

}
