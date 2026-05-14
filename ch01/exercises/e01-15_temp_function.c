#include <stdio.h>

double fahrToCelsius(double f);

/* test temperature conversion */
int main(void) {

  double fahr;
  double lower = 0.0, upper = 300.0, step = 20.0;

  fahr = lower;
  while (fahr <= upper) {
    printf("%3.f %6.1f\n", fahr, fahrToCelsius(fahr));
    fahr += step;
  }
  return 0;
}

double fahrToCelsius(double fahr) { return (5.0 / 9.0) * (fahr - 32.0); }