#include <stdlib.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));

extern void foo(int* p);
extern int* bar(void);

int main() {
  int *a,*b,*c,*d,*p, *q, *r, *s;
  a = malloc(sizeof(int));
  b = malloc(sizeof(int));
  c = malloc(sizeof(int));
  d = malloc(sizeof(int));
  foo(a);
  foo(b);
  foo(c);
  foo(d);
  p = bar();
  q = bar();
  r = bar();
  s = bar();

  if (p == d) {
    if(q == a) {
      if(r == c) {
        if(s == b) {
          __VERIFIER_error();	
	}
      }
    }
  }
  return 0;
}
