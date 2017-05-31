#include <stdio.h>

/* print Fahrenheit-Celsious table
 * for fahr = 0, 20, ..., 300; floating-point version
 *
 * A Table Header was added to make the result more
 * easily understandable to the reader.
 */

int main() 
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */
    
    /* Table Header */
    printf("Fahrenheit  |  Celsius\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%10.0f %11.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
