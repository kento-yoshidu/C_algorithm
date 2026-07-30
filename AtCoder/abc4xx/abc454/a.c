// https://atcoder.jp/contests/abc454/tasks/abc454_a

#include <stdio.h>

int fn(int l, int r) {
    return r - l + 1;
}

int main() {
    printf("%d\n", fn(3, 5));
    //=> 3

    printf("%d\n", fn(1, 7));
    //=> 7

    printf("%d\n", fn(14, 79));
    //=> 66
}
