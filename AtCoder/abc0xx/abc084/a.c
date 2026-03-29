// https://atcoder.jp/contests/abc084/tasks/abc084_a

#include <stdio.h>

int fn(int n) {
    return 48 - n;
}

int main() {
    printf("%d\n", fn(21));
    //=> 27

    printf("%d\n", fn(12));
    //=> 36
}
