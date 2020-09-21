#include <stdlib.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));

extern void foo(int* p);
extern void foo2(int*p);
extern int* bar(void);
extern int* bar2(void);

int main() {
  int *p = malloc(sizeof(int));
  int *o = malloc(sizeof(int));
  foo(p);
  foo2(o);
  int *q = bar();
  int *z = bar2();
  if (p == q) {
    if(z == o) {
      __VERIFIER_error();	
    }
  }
  return 0;
}
