#include <stdio.h>

// Sequence is like
// odd odd even odd odd even odd odd even ... xD
// 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584
// 8 = 4 * 2 + 0
// 34 = 4 * 8 + 2
// 144 = 4 * 34 + 8
// 610 = 4 * 144 + 34
// 2584 = 4 * 610 + 144
// E(n) = 4 * E(n-1) + E(n-2)

int main() {
  int sum = 0;
  const int L = 4000000;
  int a = 2, b = 8;

  while (a <= L) {
    sum += a;
    int next = 4 * b + a;
    a = b;
    b = next;
  }

  printf("Sum of even-valued terms in Fib sequence whose values less than %d is %d\n", L, sum);

  return 0;
}
