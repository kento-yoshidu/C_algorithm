// https://atcoder.jp/contests/abc438/tasks/abc438_a

#include <stdio.h>

int fn(int d, int f) {
    return 7 - (d - f) % 7;
}

int main() {
    printf("%d\n", fn(365, 4));
    //=> 3

    printf("%d\n", fn(10, 5));
    //=> 2
}
