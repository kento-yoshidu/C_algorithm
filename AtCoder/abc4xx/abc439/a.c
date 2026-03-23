// https://atcoder.jp/contests/abc439/tasks/abc439_a

#include <stdio.h>
#include <math.h>

int fn(int n) {
    return (int) (pow(2.0, (double) n)) - 2 * n;
}

int main() {
    printf("%d\n", fn(1));
    //=> 0

    printf("%d\n", fn(2));
    //=> 0

    printf("%d\n", fn(11));
    //=> 2026
}
