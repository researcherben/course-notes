#include <stdio.h>
#include <time.h>
int main()
{
        long clock;
        time(&clock);
        printf("TODAY IS %s", ctime(&clock));
}

