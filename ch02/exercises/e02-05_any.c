#include <stdio.h>

int any(char *s1, char *s2);

int main(void) {

  /* match at index 4 */
  char s1[] = "hello, world";
  char s2[] = "od";
  printf("%d\n", any(s1, s2));

  /* no match */
  char s3[] = "abcdef";
  char s4[] = "xyz";
  printf("%d\n", any(s3, s4));

  return 0;
}

int any(char *s1, char *s2) {
  for (int i = 0; s1[i] != '\0'; i++) {
    for (int j = 0; s2[j] != '\0'; j++) {
      if (s1[i] == s2[j]) {
        return i;
      }
    }
  }
  return -1;
}