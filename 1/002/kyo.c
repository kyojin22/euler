#include <stdio.h>

int main() {
  int sum = 0;
  int L = 4000000;
  int a = 0, b = 1;

  while (b <= L) {
    if (b % 2 == 0) {
      sum += b;
    }

    int t = b;
    b += a;
    a = t;

    printf("%d, %d\n", a, b);
  }

  printf("Sum of even-valued terms in Fib sequence whose values less than %d is %d\n", L, sum);

  return 0;
}
