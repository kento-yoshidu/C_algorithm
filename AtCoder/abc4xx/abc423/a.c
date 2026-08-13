// https://atcoder.jp/contests/abc423/tasks/abc423_a

#include <stdio.h>

int fn(int x, int c) {
    return x / (1000 + c) * 1000;
}

int main() {
    printf("%d\n", fn(650000, 8));
    //=> 644000

    printf("%d\n", fn(1003, 4));
    //=> 0

    printf("%d\n", fn(10000000, 24));
    //=> 9765000
}
