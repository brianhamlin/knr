/*
 * Preprocessor directive.
 * Processed before compilation by the preprocessor.
 * #include <stdio.h> tells the preprocessor to include
 * the declarations from the standard I/O header.
 *
 * Makes the declarations (like printf) visible to this translation unit.
 */
#include <stdio.h>

/*
 * Program entry point.
 * Execution begins at main (hosted environment).
 *
 * int: the program returns an integer status to the OS.
 *     By convention:
 *       0   = success
 *       non-zero = failure
 *
 * void: this version of main takes no arguments.
 *       (Alternative: int main(int argc, char *argv[]))
 */
int main(void) {
  /*
   * printf writes formatted output to stdout.
   * "hello, world\n" is a string literal.
   * \n is the newline character.
   */
  printf("hello, world\n");

  /*
   * Return status to the operating system.
   * 0 indicates successful execution.
   *
   * In C99 and later, reaching the end of main
   * without a return is equivalent to return 0;
   */
  return 0;
}
