#include <cs50.h>
#include <stdio.h>

int getNumberMinutes();

int main(void)
{
    int numMinutes = getNumberMinutes();
    printf("The number of bottles is: %i\n", (numMinutes * 12));
}

int getNumberMinutes(void)
{
    int min;
     
    do
    {
        printf("minutes: ");
        min = GetInt();
    }
    while(min < 1);
    return min;
 
 
 
 
}