#include <stdio.h>

/*
 * Fahrenheit to Celsius convert program
 * using function
 */

int convert (int fahr);

int main() 
{
    int fahr;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /*upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while (fahr <= upper) {
        printf("%d\t%d\n", fahr, convert(fahr));
        fahr = fahr + step;
    }
    return 0;
}

int convert (int fahr)
{
    int celsius;

    celsius = 5 * (fahr - 32) / 9;

    return celsius;
}
