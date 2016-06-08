//
//   Exercise 16 - 1
//
#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

main(int argc, char **argv)
{
     long clock, diff;
     int i;

     struct stat stbuf;
     for ( i = 1; i < argc; i++) {
          if(stat(argv[i],&stbuf) == -1) {
               fprintf(stderr,"can't stat %s\n", argv[i]);
               continue;
          }
          time(&clock);
          diff = (clock - stbuf.st_mtime) / 3600;
          printf("%s modified %ld hours ago\n", argv[i], diff);
     }
}
