#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/* print the length of a line and its text */
int main(void) {

  int len;
  char line[MAXLINE];

  while ((len = getLine(line, MAXLINE)) > 0) {
    printf("len: %d, text: %s", len, line);
  }

  return 0;
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
