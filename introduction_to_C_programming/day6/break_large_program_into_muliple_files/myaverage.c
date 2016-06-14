double average(int nums[], int amt)
{
    int i;
    int sum = 0;

    for (i = 0; i < amt; i++)            
        sum = sum + nums[i];
        
    return ((double) sum / amt);            
}

