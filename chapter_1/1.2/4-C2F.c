#include <stdio.h>
/*C=(5/9)(F-32) -> F = 9*C/5+32
Print Celsius-Fahrenheit table
for Celsius = 0, 20, ..., 300; floating-point version */

int main() {
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;   /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */

    printf("Celsius-Fahrenheit table\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = 9.0 * celsius / 5.0 + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
