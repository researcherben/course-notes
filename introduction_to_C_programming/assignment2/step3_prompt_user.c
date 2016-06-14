#include <stdio.h>  // printf
#include <string.h> // strcpy
#include <stdlib.h> // atof
#define MAX_INPUT_LENGTH 100
#define MAX_HISTORY_LENGTH 100
#define MAX_NAME_LENGTH 100
#define MAX_CITY_LENGTH 100
#define MAX_EMPLOYEE_COUNT 5

struct employee{
  char name[MAX_NAME_LENGTH];
  char city[MAX_CITY_LENGTH];
  double annual_pay;
};
void print_roster(struct employee *roster, int number_of_employees);
void print_record(struct employee *this_person);
int get_input_to_struct(struct employee *roster);
void split_to_three_fields(char input[], char output1[], char output2[], char output3[]);
int prompt_user_for_choice();

int main(){
  int number_of_employees=0;
  int user_selection;
  int user_input_history[MAX_HISTORY_LENGTH];
  struct employee roster[MAX_EMPLOYEE_COUNT];
  number_of_employees = get_input_to_struct(roster);
//  print_roster(roster,number_of_employees);
  int loop_indx=0;
  while(1){
    user_selection=prompt_user_for_choice();
//    printf("you selected %d\n", user_selection);
    user_input_history[loop_indx++]=user_selection;
    if (user_selection==1){
      printf("sort and display the data in sorted order by name\n");
      print_roster(roster,number_of_employees);
    } else if (user_selection==2){
      printf("sort and display the data by city\n");
      print_roster(roster,number_of_employees);
    } else if (user_selection==3){
      printf("sort and display the data by salary\n");
      print_roster(roster,number_of_employees);
    } else if (user_selection==4){
      printf("input history:\n");
      for (int indx=0; indx<loop_indx; indx++){
        printf("%d, ",user_input_history[indx]);
      }
      printf("\nexiting\n");
      break;
    } else {
      printf("invalid choice; try again\n");
    }
  }
}

int prompt_user_for_choice(){
  int user_selection;
  printf("Options: \n1) Name\n2) City\n3) Salary\n4) Exit\n");
  printf("Make a selection: [1-4]: ");
  scanf("%d",&user_selection);
  return user_selection;
}

void print_record(struct employee *this_person){
  printf("name: %s\n", this_person->name);
  printf("City: %s\n", this_person->city);
  printf("pay: %f\n", this_person->annual_pay);
}

void print_roster(struct employee *roster, int number_of_employees){
  for (int indx=0; indx<number_of_employees; indx++){
    print_record(&roster[indx]); // address of element indx in struct 
  }
}

int get_input_to_struct(struct employee *roster){
  char line[MAX_INPUT_LENGTH], field1[MAX_INPUT_LENGTH], field2[MAX_INPUT_LENGTH], field3[MAX_INPUT_LENGTH];
  int indx=0;
  int number_of_employees=0;
  while(fgets(line,MAX_INPUT_LENGTH, stdin)){ // fgets returns a pointer (non-zero), unless EOF is detected
    line[strlen(line)-1]='\0';
    split_to_three_fields(line, field1, field2, field3);
//    printf("%s\n",line);
//    printf("string1: %s\nstring2: %s\nstring3: %s\n",field1, field2, field3);
    strcpy(roster[indx].name,field1);
    strcpy(roster[indx].city,field2);
    roster[indx].annual_pay=atof(field3);
//    print_record(&roster[indx]);
    number_of_employees++;
    indx++;
  }
  return number_of_employees;
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
