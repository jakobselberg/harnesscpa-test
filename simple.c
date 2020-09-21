#include <stdlib.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));

extern void foo(int* p);

extern int* bar(void);

int main() {
  int *p = malloc(sizeof(int));
  foo(p);
  int *q = bar();
  if (p == q) {
    __VERIFIER_error();
  }
  return 0;
}
