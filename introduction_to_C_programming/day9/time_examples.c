#include <stdio.h>
#include <time.h>
int main()
{
  long clock;
  time(&clock);
  printf("epoch time: %ld\n", clock);

  char *p;
  p = ctime(&clock);
  printf("%s\n",p); // similar output to date command
  printf("%s\n",p+11); // start reading from memory off-set by 11 bits
  p[19]='\0'; // insert a null character so that string printing terminates
  printf("time: %s\n",p+11); // start reading from memory off-set by 11 bits
  printf("year: %s\n",p+20); // print the year

  struct tm *pts;
  pts = localtime(&clock); // man localtime to see the members of the tm structure
  printf("year: %d\n",pts -> tm_year); // pointer to a struct uses ->
  printf("year: %d\n",pts -> tm_year+1900); // account for offset
  printf("month: %d\n",pts -> tm_mon); // 0-11
  printf("month: %d\n",pts -> tm_mon+1); // 1-12
  
}
