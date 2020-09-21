#include <stdlib.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));

extern void foo(int* m);
extern int* bar(void);

typedef struct { int* i; } s;
struct r { s* mystruct; };

int main() {
  int *p = malloc(sizeof(int));

  s r = { .i = p };
  s* q = &r;

  struct r topLevelStruct = { .mystruct = q };

  foo(topLevelStruct.mystruct->i);
  int *s = bar();
  if (p==s) {
      __VERIFIER_error();
  }
  return 0;
}
