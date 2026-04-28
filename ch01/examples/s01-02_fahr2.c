#include <stdio.h>

// K&R used floats in their example, modern C practice would use doubles
// int main(void)
// {
//     float fahr, celsius;
//     float lower = 0.0f, upper = 300.0f, step = 20.0f;

//     fahr = lower;

//     while (fahr <= upper) {
//         celsius = (5.0f / 9.0f) * (fahr - 32.0f);
//         printf("%3.f %6.1f\n", fahr, celsius);
//         fahr += step;
//     }
// }

// using doubles
int main(void)
{
    double fahr, celsius;
    double lower = 0.0, upper = 300.0, step = 20.0;

    fahr = lower;

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.f %6.1f\n", fahr, celsius);
        fahr += step;
    }
}
