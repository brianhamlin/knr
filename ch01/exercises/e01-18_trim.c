#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void trim(char str[]);

int main(void) {
  int len;
  char line[MAXLINE];

  while ((len = getLine(line, MAXLINE)) > 0) {
    trim(line);
  }

  return 0;
}

/* trim: remove trailing blanks or delete empty line entirely */
void trim(char str[]) {
  char trimmed[MAXLINE];

  int lastCharIndex = -1;
  int i = 0;

  /* find index of last non blank char */
  while (str[i] != '\0') {
    if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
      lastCharIndex = i;
    }
    i++;
  }

  if (lastCharIndex == -1) {
    trimmed[0] = '\0';
  } else {
    for (i = 0; i <= lastCharIndex; i++) {
      trimmed[i] = str[i];
    }
    trimmed[lastCharIndex + 1] = '\0';
  }

  printf("\"%s\"\n", trimmed);
}

/* getLine: read a line into str, return length */
int getLine(char str[], int lim) {

  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    str[i] = c;
  }

  if (c == '\n') {
    str[i] = c;
    ++i;
  }

  str[i] = '\0';
  return i;
}