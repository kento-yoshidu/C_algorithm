// https://atcoder.jp/contests/abc108/tasks/abc108_a

#include <stdio.h>

int fn(int k) {
    return ((k + 1) / 2) * (k / 2);
}

int main() {
    printf("%d\n", fn(3));
    //=> 2

    printf("%d\n", fn(6));
    //=> 9

    printf("%d\n", fn(11));
    //=> 30

    printf("%d\n", fn(50));
    //=> 625
}
