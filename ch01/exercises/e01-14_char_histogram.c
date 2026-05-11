#include <stdio.h>

#define NCHARS 128

/* count the frequencies of different characters in input */
int main(void) {

  int counts[NCHARS];
  int i, c;

  for (i = 0; i < NCHARS; ++i) {
    counts[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    ++counts[c];
  }

  for (i = 0; i < NCHARS; ++i) {
    if (counts[i] > 0) {
      if (i == '\n') {
        printf("\\n = %d\n", counts[i]);
      } else if (i == '\t') {
        printf("\\t = %d\n", counts[i]);
      } else if (i == ' ') {
        printf("space = %d\n", counts[i]);
      } else {
        printf("%c = %d\n", i, counts[i]);
      }
    }
  }

  return 0;
}