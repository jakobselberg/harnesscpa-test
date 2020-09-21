#include <stdlib.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));

extern void foo(int* m);
extern int* bar1(void);
extern int* bar2(void);

struct s { int* i; };

int main() {
  int *p = malloc(sizeof(int));
  foo(p);
  struct s q = { .i = malloc(sizeof(int))};
  struct s* n = &q;
  foo(n->i);
  int *r = bar1();
  int *o = bar2();
  q.i = o;
  q.i = bar2();
  if (p==r) {
    if (q.i == o) {
      __VERIFIER_error();
    }	
  }
  return 0;
}
