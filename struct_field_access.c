#include <stdlib.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));

struct s { int* i; };
extern int* bar(void);
extern void foo(struct s pS);

int main() {
  int p = 5;
  struct s s1 = { .i = &p };
  foo(s1);
  int* q = bar();
  if (q == s1.i) {
    __VERIFIER_error();	
  }
  return 0;
}
