#include <stdio.h>

/*Print Fahrenheit-Celsius tablefor fahr = 0,20,...,300 */

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   // Lower limit of tempurature scale
    upper = 300; // Upper Limit
    step = 20;   // Step size

    celsius = lower;

    printf("Celsius\tFahrenheit\n");
    while (celsius <= upper) {
        //(0°C × 9/5) + 32
        fahr = (celsius * (9.0 / 5.0)) + 32;
        printf("%8.0f %10.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}

