#include <stdio.h>

#define IN 1
#define OUT 0

/* print input one word per line */
int main(void) {

  int c, state;
  char word[100];
  int i = 0;

  state = OUT;

  while ((c = getchar()) != EOF) {

    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        // Print on the transition from IN -> OUT
        state = OUT;
        word[i++] = '\0';
        printf("%s\n", word);
        i = 0;
      }
    } else {
      state = IN;
      word[i++] = c;
    }
  }

  if (state == IN) {
    word[i++] = '\0';
    printf("%s\n", word);
  }

  return 0;
}