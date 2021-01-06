#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int input_num;

    do
    {
        input_num= get_int ("Height:");
    }    
    while (input_num > 8 || input_num < 1);

    for (int n = 0;  n < input_num; n++)
    {
        for (int x = 0 ; x < input_num-n-1; x++)  
        {
            printf(" ");
        }
        for (int m = -1; m < n; m++)
        {
            printf("#");
        }        
        printf("  ");
        for (int m = -1; m < n; m++)
        {
            printf("#");
        }
        printf("\n"); 
        
    }
    
    }