#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void reverse(char str[]);

int main(void) {

  int len;
  char line[MAXLINE];

  while ((len = getLine(line, MAXLINE)) > 0) {
    reverse(line);
  }

  return 0;
}

/* reverse: takes an input str, creates a reverse of it and prints it */
void reverse(char str[]) {
  // determine length of input string
  int currentIndex = 0;
  while (str[currentIndex] != '\0') {
    ++currentIndex;
  }
  int stringLength = currentIndex;

  // skip newline if present
  if (stringLength > 0 && str[stringLength - 1] == '\n') {
    stringLength--;
  }

  char reversed[stringLength + 1]; // add one space for terminator

  int sourceIndex =
      stringLength -
      1; // the index of the last char getting copied into the new arr

  for (currentIndex = 0; currentIndex < stringLength; currentIndex++) {
    reversed[currentIndex] = str[sourceIndex];
    sourceIndex--;
  }

  printf("%s\n", reversed);
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
