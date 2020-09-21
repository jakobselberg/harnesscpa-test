#include <stdlib.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));

extern void foo(int* i);
extern int* bar();

int main() {
  int arr[5];
  int* p;
  foo(arr);
  p = bar();

  if(p == arr) {
    __VERIFIER_error();
  }
  return 0;
}
