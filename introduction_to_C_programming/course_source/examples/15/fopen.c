/* 
	fopen.c
*/
#include <stdio.h> 
#include <stdlib.h>

main(int argc, char **argv)	 
{ 						
	FILE *fpin, *fpout; 
	int c; 

	/* 	
		Make sure argument count is correct
	*/
	if ( argc != 3) { 
		fprintf(stderr, "usage:copy in out\n"); 
		exit(1); 
	}
	
	fpin = fopen(argv[1], "r"); 

	/* 	
		Make sure input file is opened
	*/
	if (fpin == NULL) { 
		fprintf(stderr, "error: %s\n",argv[1]); 
		exit(2); 
	}
	
	fpout = fopen(argv[2], "w");
 
	/* 	
		Make sure output file is opened    
    */
    if (fpout == NULL) { 
        fprintf(stderr, "error %s\n", argv[2]); 
        exit(3); 
    } 

    while(( c = getc(fpin)) != EOF) 
        putc(c, fpout);
        
    fclose(fpin);
    fclose(fpout);
    
    exit(0);
}
