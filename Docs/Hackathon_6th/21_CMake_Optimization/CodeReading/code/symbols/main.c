#include <stdio.h>

extern void foo();

void bar() {
  printf("What happend today?\n");
}

// inline void goodbye() {
//   printf("Goodbye world!\n");
// }

int main() {
  foo();
  bar();
  int local_var = 2;
  // goodbye();
  return 0;
}
