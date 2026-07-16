// https://atcoder.jp/contests/abc107/tasks/abc107_a

#include <stdio.h>

int fn(int n, int i) {
    return n - i + 1;
}

int main() {
    printf("%d\n", fn(4, 2));
    //=> 3

    printf("%d\n", fn(1, 1));
    //=> 1

    printf("%d\n", fn(15, 11));
    //=> 5
}
