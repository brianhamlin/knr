#include <stdio.h>

void squeeze(char *s1, char *s2);
int in(int c, char *str);

int main(void) {

  char s1[] = "hello, world";
  char s2[] = "ol";

  squeeze(s1, s2);

  printf("%s\n", s1);

  return 0;
}

/* squeeze v2: delete each char in s1 that matches any character in s2 */
void squeeze(char *s1, char *s2) {
  int i, j;

  for (i = j = 0; s1[i] != '\0'; i++) {
    if (!in(s1[i], s2)) {
      s1[j++] = s1[i];
    }
  }
  s1[j] = '\0';
}

/* in: return 1 is the char is included in the specified string */
int in(int c, char *str) {
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == c) {
      return 1;
    }
  }
  return 0;
}