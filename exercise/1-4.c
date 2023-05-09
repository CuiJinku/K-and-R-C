#include <stdio.h>

/* print Celsius-Fahrenheit table */
int main()
{
    float fahr, celsius;
    float lower, upper, step;
    
    lower = -20;    /* lower limit of temperature table */
    upper = 150;    /* upper limit */
    step = 10;      /* step size */
    
    celsius = lower;
    printf("Celsius-Fahrenheit table\n");
    printf("Celsius Fahr\n");
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0; // 9/5 is 1, 9.0/5.0 is 1.8
        printf("%6.1f %3.0f\n", celsius, fahr); // %6.1f means 6 characters wide, 1 after decimal point, %3.0f means 3 characters wide, no decimal point
        celsius = celsius + step;
    }

    return 0;
}