#include <stdio.h>

// print Fahrenheit-Celsius table
int main(void)
{
    // define variables
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      // lower limit of the temp table
    upper = 300;    // upper limit
    step = 20;      //step size

    fahr = lower;
    while(fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;      // avoid 5/9 truncating to zero
        printf("%3d %6d\n", fahr, celsius); // %d specifies an integer argument; 3 and 6 specify the field width
        fahr += step;
    }
}
