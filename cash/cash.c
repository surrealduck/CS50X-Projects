#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float input;

    do
    {
        input= get_float ("Change:");
    }
    while (input < 0.00 );
    
    int adet = 0;
    
    while (input >= 0.01)
    {
       
    if (input >= 0.25)
        {
            adet++; 
            input-= 0.25;
        }
    else if (input < 0.25 && input >= 0.10)
        {
            adet++;
            input-= 0.10;
        }
    else if (input < 0.10 && input >= 0.05)
        {
            adet++;
            input-= 0.05;
        }
    else if (input < 0.05 && input >= 0.01)
        {
            adet++;
            input-= 0.01;
        }
    }
        printf("%i\n",adet);
}