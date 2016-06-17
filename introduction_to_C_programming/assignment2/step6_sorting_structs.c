#include <stdio.h>  // printf
#include <string.h> // strcpy
#include <stdlib.h> // atof
#include <float.h> // DBL_MAX
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
int int_compare(const void *left, const void *right);
int double_compare(const void *left, const void *right);
int str_compare(const void *left, const void *right);
void sort_doubles(double *numbers,int number_of_doubles);
void sort_struct_doubles(struct employee *roster,int number_of_employees);
void sort_struct_names(struct employee *roster,int number_of_employees);
void sort_struct_cities(struct employee *roster,int number_of_employees);
void sort_strings_low_to_high(char names[][MAX_INPUT_LENGTH],int number_of_employees);


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
      sort_struct_names(roster,number_of_employees);
      print_roster(roster,number_of_employees);
    } else if (user_selection==2){
      printf("sort and display the data by city\n");
      sort_struct_cities(roster,number_of_employees);
      print_roster(roster,number_of_employees);
    } else if (user_selection==3){
      printf("sort and display the data by salary\n");
      sort_struct_doubles(roster,number_of_employees);
      print_roster(roster,number_of_employees);
    } else if (user_selection==4){
      printf("\ninput history:\n");
      for (int indx=0; indx<loop_indx; indx++){
        printf("%d, ",user_input_history[indx]);
      }
      printf("\nexiting\n\n");
      break;
    } else {
      printf("invalid choice; try again\n");
    }
  }
}

/*
void sort_doubles(double *numbers,int number_of_doubles){
  for (int lead_indx=0; lead_indx<number_of_doubles; lead_indx++){
    int swap_indx=-1;
    double lowest_value=DBL_MAX;
    for (int comparison_indx=lead_indx+1; comparison_indx<number_of_doubles; comparison_indx++){
      if (numbers[comparison_indx]<numbers[lead_indx]){
        if (numbers[comparison_indx]<lowest_value){ // new lowest value
          lowest_value=numbers[comparison_indx];
          swap_indx=comparison_indx;
        }
      }
    }
    if (swap_indx != -1){
      double temp=numbers[lead_indx];
      numbers[lead_indx]=numbers[swap_indx];
      numbers[swap_indx]=temp;
    }
  }
}
//*/

void sort_struct_doubles(struct employee *roster,int number_of_employees){
  for (int lead_indx=0; lead_indx<number_of_employees; lead_indx++){
    int swap_indx=-1;
    double lowest_value=DBL_MAX;
    for (int comparison_indx=lead_indx+1; comparison_indx<number_of_employees; comparison_indx++){
      if (roster[comparison_indx].annual_pay<roster[lead_indx].annual_pay){
        if (roster[comparison_indx].annual_pay<lowest_value){ // new lowest value
          lowest_value=roster[comparison_indx].annual_pay;
          swap_indx=comparison_indx;
        }
      }
    }
    if (swap_indx != -1){
      struct employee temp=roster[lead_indx];
      roster[lead_indx]=roster[swap_indx];
      roster[swap_indx]=temp;
    }
  }
}
/*
void sort_strings_low_to_high(char names[][MAX_LINE_LENGTH],int number_of_lines){
  for (int lead_indx=0; lead_indx<number_of_lines; lead_indx++){
    int swap_indx=-1;
    char lowest_value[MAX_LINE_LENGTH];
    lowest_value[0]='z';
    lowest_value[1]='\0';
    for (int comparison_indx=lead_indx+1; comparison_indx<number_of_lines; comparison_indx++){
      if ( (strcmp(       names[lead_indx],names[comparison_indx]))>0){
        if ( (strcmp(        lowest_value,names[comparison_indx]))>0){ // new lowest value
          strcpy(lowest_value,names[comparison_indx]);
          swap_indx=comparison_indx;
        }
      }
    }
    if (swap_indx != -1){
      char temp[MAX_LINE_LENGTH];
      strcpy(temp,names[lead_indx]);
      strcpy(names[lead_indx],names[swap_indx]);
      strcpy(names[swap_indx],temp);
    }
    print_names(names, NUMBER_OF_LINES);
  }  
}
//*/
void sort_struct_names(struct employee *roster,int number_of_employees){
  for (int lead_indx=0; lead_indx<number_of_employees; lead_indx++){
    int swap_indx=-1;
    char lowest_value[MAX_INPUT_LENGTH];
    lowest_value[0]='z';
    lowest_value[1]='\0';
    for (int comparison_indx=lead_indx+1; comparison_indx<number_of_employees; comparison_indx++){
      if ( (strcmp( roster[lead_indx].name, roster[comparison_indx].name))>0){
        if ( (strcmp( lowest_value, roster[comparison_indx].name))>0){ // new lowest value
          strcpy(lowest_value,roster[comparison_indx].name);
          swap_indx=comparison_indx;
        }
      }
    }
    if (swap_indx != -1){
      struct employee temp;
      temp=roster[lead_indx];
      roster[lead_indx]=roster[swap_indx];
      roster[swap_indx]=temp;
    }
  }  
}

void sort_struct_cities(struct employee *roster,int number_of_employees){
  for (int lead_indx=0; lead_indx<number_of_employees; lead_indx++){
    int swap_indx=-1;
    char lowest_value[MAX_INPUT_LENGTH];
    lowest_value[0]='z';
    lowest_value[1]='\0';
    for (int comparison_indx=lead_indx+1; comparison_indx<number_of_employees; comparison_indx++){
      if ( (strcmp( roster[lead_indx].city, roster[comparison_indx].city))>0){
        if ( (strcmp( lowest_value, roster[comparison_indx].city))>0){ // new lowest value
          strcpy(lowest_value,roster[comparison_indx].city);
          swap_indx=comparison_indx;
        }
      }
    }
    if (swap_indx != -1){
      struct employee temp;
      temp=roster[lead_indx];
      roster[lead_indx]=roster[swap_indx];
      roster[swap_indx]=temp;
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
  /*
  printf("name: %s\n", this_person->name);
  printf("City: %s\n", this_person->city);
  printf("pay: %.2f\n", this_person->annual_pay);
  //*/
  printf("%s  %s   %.2f\n", this_person->name,this_person->city,this_person->annual_pay);
}

void print_roster(struct employee *roster, int number_of_employees){
  putchar('\n');
  for (int indx=0; indx<number_of_employees; indx++){
    print_record(&roster[indx]); // address of element indx in struct 
  }
  putchar('\n');
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

/*
int int_compare(const void *left, const void *right)
{
	int *p1 = (int *) left;
	int *p2 = (int *) right;
	//printf("%5d %5d\n", *p1, *p2);
	return *p2 < *p1;
}
int double_compare(const void *left, const void *right)
{
	double *p1 = (double *) left;
	double *p2 = (double *) right;
	//printf("%5d %5d\n", *p1, *p2);
	return *p2 < *p1;
}
//*/
int str_compare(const void *left, const void *right)
{ 
	char  * const *p2 = (char * const *) right;
	char  * const *p1 = (char * const *) left;
	//return strcmp(*(char * const *)left,*(char * const *)right);  
	return strcmp(*p1, *p2);  
}

