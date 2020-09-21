#include <stdlib.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));

extern void foo(int* p);
extern int* bar(void);

struct r { int* i; };
struct s { struct r* p; };

int main() {
  int i;
  struct r p = { .i = &i };
  struct s o = { .p = &p };
  struct s *q = &o;

  if (  *&((q->p)->i)   == &i) {
    __VERIFIER_error();	
  }
  return 0;
}
