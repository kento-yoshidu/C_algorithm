// https://atcoder.jp/contests/abc044/tasks/abc044_a

#include <stdio.h>
#include "../../../util/util.h"

int func(int n, int k, int x, int y) {
    return MIN(n, k) * x + MAX(0, n - k) * y;
}

int main() {
    printf("%i\n", func(5, 3, 10000, 9000));
    //=> 48000

    printf("%d\n", func(2, 3, 10000, 9000));
    //=> 20000
}
