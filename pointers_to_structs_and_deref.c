#include <stdlib.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));

extern void foo(int* m);
extern int* bar(void);

struct s { int* i; };

int main() {
  int *p = malloc(sizeof(int));

  struct s r = { .i = p };
  struct s* q = &r;

  foo(q->i);
  int *s = bar();
  if (p==s) {
      __VERIFIER_error();
  }
  return 0;
}
