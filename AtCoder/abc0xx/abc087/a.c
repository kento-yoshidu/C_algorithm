// https://atcoder.jp/contests/abc087/tasks/abc087_a

#include <stdio.h>

int fn(int x, int a, int b) {
    int rest = x - a;
    int c = rest / b;

    return rest - c * b;
}

int main() {
    printf("%d\n", fn(1234, 150, 100));
    //=> 84

    printf("%d\n", fn(1000, 108, 108));
    //=> 28

    printf("%d\n", fn(579, 123, 456));
    //=> 0

    printf("%d\n", fn(7477, 549, 593));
    //=> 405
}
