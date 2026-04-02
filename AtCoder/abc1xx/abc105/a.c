// https://atcoder.jp/contests/abc105/tasks/abc105_a

#include <stdio.h>

int fn(int n, int k) {
    return n % k;
}

int main() {
    printf("%d\n", fn(7, 3));
    //=> 1

    printf("%d\n", fn(100, 10));
    //=> 0

    printf("%d\n", fn(1, 1));
    //=> 0
}
