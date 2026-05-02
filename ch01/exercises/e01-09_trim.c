#include <stdio.h>

/* copy input to output, replacing strings of multiple blanks with a single
 * blank */
int main(void) {

  int c;
  int previous = EOF;

  while ((c = getchar()) != EOF) {

    /* if the previous char was not a blank and the current char is not a blank,
     * print the char */
    if (!(previous == ' ' && c == ' ')) {
      putchar(c);
    }
    previous = c;
  }

  return 0;
}