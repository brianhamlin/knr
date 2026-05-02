#include <stdio.h>

/* Copy input to output; 1st version */
int main(void) {

  int c; // Declare as int instead of char so we can get all chars or EOF

  while ((c = getchar()) != EOF) {
    putchar(c);    // print the input char to std output
    c = getchar(); // get a new char
  }
  return 0;
}
