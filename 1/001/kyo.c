#include <stdio.h>

// m - total number of terms in the arithmetic sequence
// last_term in the sequence is - a + (m - 1) * d
// where a is the first number in the sequence and d is arithmetic difference
// total sum is S = (m * (first_term + last_term)) / 2
// when you plug in last_term formula to total sum
// you will get the following
// (a * m * (m + 1)) / 2

int arithmeticSum(int a, int n) {
  int m = (n - 1) / a;
  return a * m * (m + 1) / 2;
}

int main() {
  const int n = 1000;

  int sum = arithmeticSum(3, n) + arithmeticSum(5, n) - arithmeticSum(15, n);

  printf("The sum of multiples of 3 and 5 below %d is %d\n", n, sum);

  return 0;
}
