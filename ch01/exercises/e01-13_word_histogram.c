#include <stdio.h>

/* print a histogram of the lengths of words in input (max length 20 chars) */
int main(void) {

  int lengths[20];
  int len = 0;
  int c, i;
  int j = 1;

  for (i = 0; i < 20; ++i) {
    /* initialize all length counts to 0 */
    lengths[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\n' && c != '\t') {
      ++len;
    } else {
      // character is whitespace, increment previous word length
      if (len > 0) {
        ++lengths[len - 1];
        len = 0;
      }
    }
  }

  // EOF edge case
  if (len > 0) {
    ++lengths[len - 1];
  }

  printf("counts = ");
  for (i = 0; i < 20; ++i) {
    printf(" %d", lengths[i]);
  }
  printf("\n");
  printf("length = ");
  for (i = 0; i < 20; ++i) {
    printf(" %d", j++);
  }

  return 0;
}