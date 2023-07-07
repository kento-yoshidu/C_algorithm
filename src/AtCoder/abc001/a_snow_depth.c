#include <stdio.h>

int snow_depth(int a, int b)
{
  return a - b;
}

int main() {
  printf("%d", snow_depth(15, 10));

  return 0;
}
