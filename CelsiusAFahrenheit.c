#include <stdio.h>

#define MAX 100
#define MIN 0
#define DIF 10

int main ()
{
    float fahr;
    int celsius;
    
    printf ("|Celsius|Fahrenheit|\n");
    printf ("-------------------\n");
    for (celsius = MIN; celsius <= MAX; celsius+=DIF )
    {
        fahr = (celsius*9.0)/5.0 + 32.0; 
        printf("%6.1d\t| %3.0f\n", celsius, fahr);
    }
    return 0;
    
}