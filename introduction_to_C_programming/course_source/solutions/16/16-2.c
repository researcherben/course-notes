//
//   Exercise 16-2
//
#include <stdio.h>
#include <time.h>

main()
{
     long clock, now;
     
     time(&clock);
     printf("%s",ctime(&clock));
     
     time(&now);
     while((now - clock) < 10)
          time(&now);
          
     printf("%s\n",ctime(&now));
}
