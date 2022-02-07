#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int collatz = get_int("collatz: ");
    int counter = 0; 
    while(collatz != 1)
    {
        if(collatz%2 == 0)
        {
            collatz = collatz/2;
            counter ++;
        }
        else
        {
            collatz = collatz*3 + 1;
            counter++;
        }
    }
    printf("%i\n", counter);
}
