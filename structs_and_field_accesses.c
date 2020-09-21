#include <stdlib.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));

extern void foo(int* p);
extern int* bar(void);

struct s { int* k;  };

int main() {
  int *p = malloc(sizeof(int));
  foo(p);
  int* o = malloc(sizeof(int));
  foo(o);
  int *q = bar();
  struct s a;
  a.k = bar();
  if (o == q) {
    if (a.k == q) {
      __VERIFIER_error();
    }
  }
  return 0;
}
