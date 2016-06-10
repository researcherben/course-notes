#include <stdio.h>
#define MAXLENGTH 100
void split(char input[], char output1[], char output2[]);

int main(){
  char string[MAXLENGTH], field1[MAXLENGTH], field2[MAXLENGTH];
//  fgets(string, MAXLENGTH, stdin);
  split("hello bam",field1,field2);
  printf("string1: %s\nstring2: %s\n",field1, field2);
}
void split(char input[], char output1[], char output2[]){
  printf("input string: [[%s]]\n",input);
  int indx =0;
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
  int local_indx=0; 
  while (this_char != '\0'){
//    printf("%c\n",this_char);
    output2[local_indx]=this_char;
    this_char=input[++indx];
    local_indx++;
  }
  output2[indx]='\0'; // terminate string with trailing null character

}
