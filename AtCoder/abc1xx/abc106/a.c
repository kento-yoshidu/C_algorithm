// https://atcoder.jp/contests/abc106/tasks/abc106_a

#include <stdio.h>

int fn(int a, int b) {
    return (a - 1) * (b - 1);
}

int main() {
    printf("%d\n", fn(2, 2));
    //=> 1

    printf("%d\n", fn(5, 7));
    //=> 24
}
