#include <stdio.h>

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int getSummationFactorial(int n, int m) {
  return factorial(n) + factorial(m);
}

int main() {
  printf("%d\n", getSummationFactorial(5, 3));
  return 0;
}
