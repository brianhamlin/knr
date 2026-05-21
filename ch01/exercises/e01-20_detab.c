#include <stdio.h>
#define MAXLINE 1000
#define TABWIDTH 4

int getLine(char line[], int maxline);
void detab(char str[]);

/* replace tabs in a string with the correct number of spaces */
int main(void) {

  int len;
  char line[MAXLINE];

  while ((len = getLine(line, MAXLINE)) > 0) {
    detab(line);
  }

  return 0;
}

/* detab: copies str into detabbed, replacing tabs with spaces up to the next tab position */
void detab(char str[]) {
  int i = 0, j = 0;
  char detabbed[MAXLINE];

  while (str[i] != '\0') {
    if (str[i] == '\t') {
      int k;
      int remaining = TABWIDTH - (j % TABWIDTH);
      for (k = j; k < j + remaining; k++) {
        detabbed[k] = ' ';
      }
      j = k;
    } else {
      detabbed[j] = str[i];
      j++;
    }
    i++;
  }
  detabbed[j] = '\0';

  printf("detabbed: %s", detabbed);
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim) {
  int c, i;

  /* for i is less than 1000 AND input is not EOF AND input is not newline */
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0'; /* terminate string */
  return i;
}