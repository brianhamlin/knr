#include <stdio.h>

int main(void)
{
    double celsius, fahr;
    double lower = 0.0, upper = 100.0, step = 10.0;

    celsius = lower;

    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%3.f %6.f\n", celsius, fahr);
        celsius += step;
    }
}
