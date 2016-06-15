#include <stdio.h>
int main()
{
  char line[100];
  fgets(line, 100, stdin); // arguments: char *s, int, FILE.  "line" is the address of the char array
  printf("%s", line);

  char *p;
  p=line;
  fgets(p,100,stdin);

}
