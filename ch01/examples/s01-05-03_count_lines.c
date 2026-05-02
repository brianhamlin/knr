#include <stdio.h>

/* count lines in input */
int main(void) {

  int c, nl;

  nl = 0;
  while ((c = getchar()) != EOF) {
    /* a char written in single quotes represents an int value equal to the
     * numerical value of the char in the machine's charset */
    if (c == '\n') {
      ++nl;
    }
  }
  printf("%d\n", nl);

  return 0;
}