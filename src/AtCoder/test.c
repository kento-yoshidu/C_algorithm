#include <stdio.h>

int product(int a) {
  return a * a;
}

int main() {
  int result = product(3);

  printf("%d", result);

  return 0;
}
