#include <stdio.h>
#include <string.h>
#define NUMBER_OF_LINES 5
#define MAX_LINE_LENGTH 10
void sort_strings_high_to_low(char names[][MAX_LINE_LENGTH],int number_of_lines);
void sort_strings_low_to_high(char names[][MAX_LINE_LENGTH],int number_of_lines);
void print_names(char names[][MAX_LINE_LENGTH],int number_of_lines);
int main(){
  char names[NUMBER_OF_LINES][MAX_LINE_LENGTH];
/*
  strcpy(names[0],"Michael");
  strcpy(names[1],"Joel");
  strcpy(names[2],"Judy");
  strcpy(names[3],"Arthur");
  strcpy(names[4],"Sally");
  printf("\nbefore sort:\n");
  print_names(names, NUMBER_OF_LINES);
  sort_strings_high_to_low(names, NUMBER_OF_LINES);
  printf("\nafter sort high to low:\n");
  print_names(names, NUMBER_OF_LINES);
//*/
///*
  strcpy(names[0],"Michael");
  strcpy(names[1],"Joel");
  strcpy(names[2],"Judy");
  strcpy(names[3],"Arthur");
  strcpy(names[4],"Sally");
  printf("\nbefore sort:\n");
  print_names(names, NUMBER_OF_LINES);
  sort_strings_low_to_high(names, NUMBER_OF_LINES);
  printf("\nafter sort low to high:\n");
  print_names(names, NUMBER_OF_LINES);
//*/
}

void print_names(char names[][MAX_LINE_LENGTH],int number_of_lines){
  for (int indx=0; indx<number_of_lines; indx++){
    printf("%d: %s\n",indx,names[indx]);
  }
}
/*
void sort_strings_high_to_low(char names[][MAX_LINE_LENGTH],int number_of_lines){
  for (int lead_indx=0; lead_indx<number_of_lines; lead_indx++){
    int swap_indx=-1;
    char lowest_value[MAX_LINE_LENGTH];
    lowest_value[0]='z';  // A-Z, a-z
    lowest_value[1]='\0';
//    printf("lead: %s\n",names[lead_indx]);
    for (int comparison_indx=lead_indx+1; comparison_indx<number_of_lines; comparison_indx++){
      printf("result of strcmp, lead %s vs comparison %s: %d\n",
                           names[lead_indx],names[comparison_indx],
                   strcmp( names[lead_indx],names[comparison_indx]));
      if ( (strcmp( names[comparison_indx], names[lead_indx]))>0){
        printf("result of strcmp, lowest %s vs comparison %s: %d\n",
                               lowest_value,names[comparison_indx],
                       strcmp( lowest_value,names[comparison_indx]));
        if ( (strcmp( lowest_value, names[comparison_indx]))>0){ // new lowest value
          strcpy(lowest_value,names[comparison_indx]);
          printf("new lowest value: %s\n",lowest_value);
          swap_indx=comparison_indx;
//          printf("%d\n",swap_indx);
        }
      }
    }
//    printf("%d\n",swap_indx);
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
void sort_strings_low_to_high(char names[][MAX_LINE_LENGTH],int number_of_lines){
  for (int lead_indx=0; lead_indx<number_of_lines; lead_indx++){
    int swap_indx=-1;
    char lowest_value[MAX_LINE_LENGTH];
    lowest_value[0]='z';
    lowest_value[1]='\0';
//    printf("lead: %s\n",names[lead_indx]);
    for (int comparison_indx=lead_indx+1; comparison_indx<number_of_lines; comparison_indx++){
      printf("result of strcmp, lead %s vs comparison %s: %d\n",
                          names[lead_indx],names[comparison_indx],
                  strcmp( names[lead_indx],names[comparison_indx]));
      if ( (strcmp(       names[lead_indx],names[comparison_indx]))>0){
        printf("result of strcmp, lowest %s vs name %s: %d\n",
                             lowest_value,names[comparison_indx],
                     strcmp( lowest_value,names[comparison_indx]));
        if ( (strcmp(        lowest_value,names[comparison_indx]))>0){ // new lowest value
          strcpy(lowest_value,names[comparison_indx]);
          printf("new lowest value: %s\n",lowest_value);
          swap_indx=comparison_indx;
//          printf("%d\n",swap_indx);
        }
      }
    }
//    printf("%d\n",swap_indx);
    if (swap_indx != -1){
      char temp[MAX_LINE_LENGTH];
      strcpy(temp,names[lead_indx]);
      strcpy(names[lead_indx],names[swap_indx]);
      strcpy(names[swap_indx],temp);
    }
    print_names(names, NUMBER_OF_LINES);
  }  
}

