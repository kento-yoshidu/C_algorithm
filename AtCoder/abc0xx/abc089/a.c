// https://atcoder.jp/contests/abc089/tasks/abc089_a

#include <stdio.h>

int fn(int n) {
    return n / 3;
}

int main() {
    printf("%d\n", fn(8));
    //=> 2

    printf("%d\n", fn(2));
    //=> 0

    printf("%d\n", fn(9));
    //=> 3
}
