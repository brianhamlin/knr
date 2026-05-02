#include <stdio.h>

/* copy input to output; 2nd version */
int main(void) {
    
  /*
   * Must be int, not char:
   * holds either a character value or EOF
   */
  int c;

  /*
   * Read first character from stdin.
   * getchar() returns int (char value or EOF)
   */
  while ((c = getchar()) != EOF) {

    /*
     * Write character to stdout.
     * putchar expects an int (converted to unsigned char internally)
     */
    putchar(c);
  }

  return 0;
}