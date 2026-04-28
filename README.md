# K&R C Examples and Exercises

This repository contains my examples and exercise solutions while working through *The C Programming Language* by Brian W. Kernighan and Dennis M. Ritchie.

The goal is to understand core C and systems-level programming concepts by working through K&R, while rewriting examples in modern C (C17) and compiling with strict warnings and runtime checks.

This repository prioritizes correctness, clarity, and understanding over brevity.

---

## Repository Layout

```text
.
├── Makefile
├── README.md
├── ch01/
│   ├── examples/
│   └── exercises/
├── ch02/
│   ├── examples/
│   └── exercises/
└── build/
```

* Each chapter has its own directory: `ch01/`, `ch02/`, etc.
* `examples/` contains programs based on book examples.
* `exercises/` contains solutions to numbered exercises.
* `build/` contains compiled binaries and debug output; it is not tracked by git.

---

## File Naming

Files are named to reflect their position in the book.

### Examples

```text
s<chapter>-<section>_<short-description>.c
```

Examples:

```text
ch01/examples/s01-01_hello-world.c
ch01/examples/s01-05_temperature-table.c
```

### Exercises

```text
ex<chapter>-<exercise>_<short-description>.c
```

Examples:

```text
ch01/exercises/ex01-01_hello-errors.c
ch01/exercises/ex01-13_word-lengths.c
```

This keeps files ordered by book progression while remaining descriptive.

---

## Compiling Programs

The original K&R code predates modern ISO C standards, so examples are updated slightly to compile cleanly as modern C.

Typical updates include:

* Using `int main(void)` instead of old-style `main()`
* Including appropriate standard headers (e.g., `<stdio.h>`)
* Adding function prototypes
* Avoiding implicit `int` and implicit function declarations

### Build a Chapter with Make

The `Makefile` builds all `.c` files in a chapter's `examples/` and `exercises/` directories, if those directories contain source files.

Build chapter 1:

```sh
make ch01
```

This uses:

```make
CC := clang
CFLAGS := -std=c17 -Wall -Wextra -Wpedantic -g -O0
```

Output files mirror the source tree under `build/`. For example:

```text
ch01/examples/s01-01_hello-world.c
```

builds to:

```text
build/ch01/examples/s01-01_hello-world
```

Run it with:

```sh
./build/ch01/examples/s01-01_hello-world
```

Clean all build outputs:

```sh
make clean
```

> On macOS, `-g` may also create `.dSYM` debug-symbol bundles. These are ignored by git.

### Manual Compile Command

The Makefile should be enough most of the time, but a manual compile command is useful for one-off experiments:

```sh
mkdir -p build

clang -std=c17 -Wall -Wextra -Wpedantic -g -O0 \
  -o build/program-name path/to/program.c
```

Run:

```sh
./build/program-name
```

> On macOS, `clang` is the default compiler via Xcode Command Line Tools.
> The `gcc` command may also invoke Clang.

---

## Stricter Warnings

For deeper feedback:

```sh
clang -std=c17 \
  -Wall -Wextra -Wpedantic \
  -Wshadow -Wconversion -Wstrict-prototypes -Wmissing-prototypes \
  -g -O0 \
  -o build/program-name path/to/program.c
```

Note: `-Wconversion` can be noisy for small exercises, but useful for catching subtle issues.

---

## Debug Builds with Sanitizers

To catch memory errors and undefined behavior:

```sh
clang -std=c17 \
  -Wall -Wextra -Wpedantic \
  -g -O0 \
  -fsanitize=address,undefined \
  -o build/program-name path/to/program.c
```

Run normally:

```sh
./build/program-name
```

Sanitizers will report issues like:

* out-of-bounds access
* use-after-free
* undefined behavior

---

## Release-ish Builds

```sh
clang -std=c17 -Wall -Wextra -Wpedantic -O2 \
  -o build/program-name path/to/program.c
```

For this repository, debug builds (`-g -O0`) are generally preferred.

---

## Modern C vs. K&R C

K&R is historically important, but reflects an older version of the language.

When working through the book, I preserve the intent of the original examples while expressing them in modern C (C17).

This typically includes:

* `int main(void)` instead of `main()`
* Explicit function prototypes
* Proper header inclusion
* Avoiding implicit typing
* Using `double` or `float` where integer math obscures results
* Refactoring control flow (e.g., `while` → `for`) when it improves clarity

The goal is not stylistic rewriting, but understanding what the original code demonstrates and expressing that clearly in modern C.

---

## Useful Commands

Build all programs for chapter 1:

```sh
make ch01
```

Run one compiled program:

```sh
./build/ch01/examples/s01-01_hello-world
```

Manually compile a single file:

```sh
mkdir -p build

clang -std=c17 -Wall -Wextra -Wpedantic -g -O0 \
  -o build/example ch01/examples/s01-01_hello-world.c
```

Clean all build outputs:

```sh
make clean
```

---

## Progress

* [ ] Chapter 1: A Tutorial Introduction
* [ ] Chapter 2: Types, Operators, and Expressions
* [ ] Chapter 3: Control Flow
* [ ] Chapter 4: Functions and Program Structure
* [ ] Chapter 5: Pointers and Arrays
* [ ] Chapter 6: Structures
* [ ] Chapter 7: Input and Output
* [ ] Chapter 8: The UNIX System Interface
