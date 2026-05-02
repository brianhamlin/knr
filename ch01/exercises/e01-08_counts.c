#include <stdio.h>

/* count blanks, tabs, and newlines */
int main(void) {

  int c, nb = 0, nt = 0, nl = 0;

  while ((c = getchar()) != EOF) {
    // count newlines
    if (c == '\n') {
      ++nl;
    }

    // count tabs
    if (c == '\t') {
      ++nt;
    }

    // count blanks
    if (c == ' ') {
      ++nb;
    }
  }
  printf("blanks: %d\t tabs: %d\t newlines: %d\n", nb, nt, nl);

  return 0;
}