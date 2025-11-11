// https://atcoder.jp/contests/abc037/tasks/abc037_a

#include <stdio.h>
#include "../../../util/util.h"

// #define MIN(a, b) ((a) < (b) ? (a) : (b))

int func(int a, int b, int c) {
    return c / MIN(a, b);
}

int main() {
    printf("%d\n", func(3, 5, 6));
    //=> 2

    printf("%d\n", func(8, 6, 20));
    //=> 3
}
