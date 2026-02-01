// https://atcoder.jp/contests/abc082/tasks/abc082_a

#include <stdio.h>

int fn(int a, int b) {
    return (a + b + 1) / 2;
}

int main() {
    printf("%d\n", fn(1, 3));
    //=> 2

    printf("%d\n", fn(7, 4));
    //=> 6

    printf("%d\n", fn(5, 5));
    //=> 5
}
