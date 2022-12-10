#include <stdio.h>

/**
 *main - receives no argument
 *
 *Return: Always 0 (success)
 */

int main(void) {
  // Print numbers 0-9
  for (int i = 0; i < 10; i++) {
    putchar('0' + i);
  }

  // Print letters a-f
  for (int i = 0; i < 6; i++) {
    putchar('a' + i);
  }

  // Print a new line
  putchar('\n');

  return 0;
}

