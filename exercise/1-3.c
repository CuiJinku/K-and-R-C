#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */
    
    fahr = lower;
    printf("Fahrenheit-Celsius table\n");
    printf("Fahr Celsius\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0); // 5/9 is 0, 5.0/9.0 is 0.5555555555555556
        printf("%3.0f %6.1f\n", fahr, celsius); // %3.0f means 3 characters wide, no decimal point, %6.1f means 6 characters wide, 1 after decimal point
        fahr = fahr + step;
    }

    return 0;
}