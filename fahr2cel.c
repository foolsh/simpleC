#include <stdio.h>

/*Print Fahrenheit-Celsius tablefor fahr = 0,20,...,300 */

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   // Lower limit of tempurature scale
    upper = 300; // Upper Limit
    step = 20;   // Step size

    fahr = lower;

    printf("Fahrenheit to Celsius");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%8.0f %10.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

