#include <stdio.h>
#include <string.h>
#define MAX_STRNG_LENGTH 100
void reverse(char *strng);
void changecase(char *strng);
void mystrcmp(char *strng1, char *strng2);
int main(){
  char this_string[MAX_STRNG_LENGTH];
  strcpy(this_string, "Hey now, You're an All star");
  printf("%s\n", this_string);
  reverse(this_string);
  printf("reversed:\n%s\n", this_string);

  strcpy(this_string, "Hey now, You're an All star");
  changecase(this_string);
  printf("change case:\n%s\n", this_string);
  
  mystrcmp("ben","ben");
}
void reverse(char *strng){
  char temp;
  int back_indx;
//  printf("prior to loop: [[%s]]\n",strng);
//  printf("string length: %ld\n", strlen(strng));
  for (int front_indx=0; front_indx<strlen(strng)/2.0; front_indx++){
//    printf("front index: %d\n", front_indx);
    back_indx=strlen(strng)-front_indx-1;
//    printf("back index: %d\n", back_indx);
    temp=strng[front_indx];
//    printf("current front char to swap: %c\n", temp);
//    printf("current back  char to swap: %c\n", strng[back_indx]);
    strng[front_indx]=strng[back_indx];
//    printf("after front assignment: [[%s]]\n",strng);
    strng[back_indx]=temp;
//    printf("current: [[%s]]\n",strng);
  }
}
void changecase(char *strng){
  for (int indx=0; indx<strlen(strng); indx++){
//    printf("%c", strng[indx]);
    if (strng[indx]>='a' && strng[indx]<='z'){
      strng[indx]=strng[indx]+'A'-'a';
    } else if (strng[indx]>='A' && strng[indx]<='Z'){
      strng[indx]=strng[indx]+'a'-'A';
    }
  }
}
void mystrcmp(char *strng1, char *strng2){
  for (int indx=0; indx<strlen(strng1); indx++){
  }
}

