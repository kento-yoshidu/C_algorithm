// https://atcoder.jp/contests/abc437/tasks/abc437_a

#include <stdio.h>

int fn(int a, int b) {
    return a * 12 + b;
}

int main() {
    printf("%d\n", fn(6, 7));
    //=> 79

    printf("%d\n", fn(4, 11));
    //=> 59

    printf("%d\n", fn(8, 0));
    //=> 96
}
