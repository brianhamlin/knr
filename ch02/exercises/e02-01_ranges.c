#include <limits.h>
#include <stdio.h>

int main(void) {

  printf("signed char: %d unsigned char: %u\n", SCHAR_MAX, UCHAR_MAX);
  printf("signed short: %d unsigned short: %u\n", SHRT_MAX, USHRT_MAX);
  printf("signed int: %d unsigned int: %u\n", INT_MAX, UINT_MAX);
  printf("signed long: %ld unsigned long: %lu\n", LONG_MAX, ULONG_MAX);

  return 0;
}