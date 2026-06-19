// https://atcoder.jp/contests/abc102/tasks/abc102_a

#include <stdio.h>

int fn(int n) {
    if (n % 2 == 0) {
        return n;
    } else {
        return n * 2;
    }
}

int main() {
    printf("%d\n", fn(3));
    //=> 6

    printf("%d\n", fn(10));
    //=> 10

    printf("%d\n", fn(999999999));
    //=> 1999999998
}
