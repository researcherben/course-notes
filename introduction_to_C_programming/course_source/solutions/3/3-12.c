//  Exercise 3-12

#include <stdio.h>

main()
{
    int sum, baseNum, consecNum, answerNum = 1, m;
    
    for (baseNum = 1; baseNum < 10000; baseNum++) 
    {
        sum = 0;
        for (consecNum = baseNum; consecNum < 10000; consecNum++) 
        {
            sum += consecNum;
            if (sum > 10000)
            {
               break; // no need to continue inner loop
        	}
            else if (sum == 10000) 
            {
                printf("Solution %d\n", answerNum++);
                for (m = baseNum; m <= consecNum; m++)
                {
                    printf("%d ", m);
                }
                printf("\n");
            } 
        } 
    } 
}

